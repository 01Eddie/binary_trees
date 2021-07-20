#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry point
 * @tree: constant binary_tree_t
 * Return: 0, 1 or count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count);
}
