#include "binary_trees.h"

/**
 * function that deletes an entire binary tree
 * @tree: pointer to root of tree
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (!node->left && !node->right)
        return (1);
    else
        return (0);
}
