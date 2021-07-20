#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * tree: constant binary_tree_t
 * Return: count
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t count = 0;

    if (!tree)
        return (0);

    if (!tree || tree->parent == NULL)
        return (count);

    count = 1 + binary_tree_leaves(tree->parent);

    return (count);
}