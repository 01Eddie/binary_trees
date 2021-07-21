#include "binary_trees.h"

/**
 * binary_tree_levelorder - Prints a number
 * @tree: Number to be printed
 * @func: Int
 * Return: Void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
