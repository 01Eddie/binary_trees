#include "binary_trees.h"

/**
 * binary_tree_is_full - Entry point
 * tree: const binary_tree_t pointer
 * Return: Always 0 (Success)
 */
 
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));

	return (0);
}
