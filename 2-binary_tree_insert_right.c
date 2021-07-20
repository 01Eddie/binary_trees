#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 * @parent: Pointer of binary_tree_t
 * @value: Integer
 * Return: null or new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		binary_tree_t *temp;

		temp = parent->right;
		parent->right = new_node;
		temp->parent = new_node;
		new_node->right = temp;
	}
	new_node->left = NULL;

	return (new_node);
}
