#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t count = 0;

    if (!tree)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

    return (count);
}