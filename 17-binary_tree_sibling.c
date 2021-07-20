#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_sibling - Entry point
 * @node: Pointer of binary_tree_t
 * Return: NULL or node->parent->left
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
