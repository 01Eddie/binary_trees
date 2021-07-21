#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

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

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	return (height_left - height_right);
}

/**
 * binary_tree_height - Entry point
 * @tree: Constant of binary_tree_t
 * Return: rightSide or leftSide
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftSide = 0, rightSide = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	leftSide = 1 + binary_tree_height(tree->left);
	rightSide = 1 + binary_tree_height(tree->right);

	if (leftSide > rightSide)
		return (leftSide);
	return (rightSide);
}
