#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry point
 * @node: constant binary_tree_t
 * Return:  0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node == NULL || node->parent == NULL)
		return (1);
	else
		return (0);
}
