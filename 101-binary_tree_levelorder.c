#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
void binary_tree_currentlevel(const binary_tree_t *tree, size_t level,
							  void (*func)(int));

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

	leftSide = 1 + binary_tree_height(tree->left);
	rightSide = 1 + binary_tree_height(tree->right);

	if (leftSide > rightSide)
		return (leftSide);
	return (rightSide);
}

/**
 * binary_tree_currentlevel - Prints a number
 * @tree: Number to be printed
 * @level: Int
 * Return: Void
 */
void binary_tree_currentlevel(const binary_tree_t *branch, size_t level,
							  void (*func)(int))
{
	if (!branch)
		return;
	if (level == 1)
		func(branch->n);
	else if (level > 1)
	{
		binary_tree_currentlevel(branch->left, level - 1, func);
		binary_tree_currentlevel(branch->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Prints a number
 * @tree: Number to be printed
 * @func: Int
 * Return: Void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = binary_tree_height(tree);
	size_t i;

	if (!tree || !func)
		return;

	for (i = 0; i <= h; i++)
		binary_tree_currentlevel(tree, i, func);
}
