#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t count = 0;

    if (!tree)
        return (0);

    count = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
    return (count);
}