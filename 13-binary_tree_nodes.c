#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (tree->left || tree->right)
        return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
    else
        return (0);
}