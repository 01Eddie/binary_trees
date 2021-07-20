#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * @parent: pointer of binary_tree_t
 * @value: Integer
 * Return: NULL or new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		binary_tree_t *temp;

		temp = parent->left;
		parent->left = new_node;
		temp->parent = new_node;
		new_node->left = temp;
	}
	new_node->right = NULL;

	return (new_node);
}
