#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
