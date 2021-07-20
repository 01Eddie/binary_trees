#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 * @node: constant binary_tree_t
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
