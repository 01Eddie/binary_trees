#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    func(tree->n);
    binary_tree_inorder(tree->left, func);
    binary_tree_inorder(tree->right, func);
}