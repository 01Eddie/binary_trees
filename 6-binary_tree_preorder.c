#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    binary_tree_preorder(tree->left, func);
    func(tree->n);
    binary_tree_preorder(tree->right, func);
}