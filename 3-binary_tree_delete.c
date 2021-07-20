#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree delete
 * @tree: Pointer of binary_tree_t
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	tree->left = NULL;
	tree->right = NULL;
	tree->parent = NULL;
	free(tree);
}
