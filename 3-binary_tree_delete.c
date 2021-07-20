#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
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