#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints a number
 * @tree: Constant pointer of binary_tree_t
 * @func: Void
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
