#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Entry point
 * @tree: constant binary_tree_t
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftSide = 0, rightSide = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leftSide = binary_tree_height(tree->left);
	rightSide = binary_tree_height(tree->right);

	if (leftSide == rightSide)
	{
		int l = binary_tree_is_perfect(tree->left);
		int r = binary_tree_is_perfect(tree->right);

		return (l * r);
	}

	return (0);
}

/**
 * binary_tree_height - Entry point
 * @tree: constant binary_tree_t
 * Return: 0 or 1
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
