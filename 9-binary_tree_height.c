#include "binary_trees.h"

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
