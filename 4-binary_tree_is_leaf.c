#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return 0;
    //Your function must return 1 if node is a leaf, otherwise 0
    if (node->right == NULL && node->left == NULL)
        return 1;
    else
        return 0;
}