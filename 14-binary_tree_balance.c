#include "binary_trees.h"

/**
 * binary_tree_balance - Entry point
 * @tree:Constant of binary_tree_t
 * Return: 0 or height_left - height_right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_balance(tree->right);

	return (height_left - height_right);
}
