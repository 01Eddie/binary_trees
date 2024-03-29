#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 * @tree: constant binary_tree_t
 * Return: count or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (count);
}
