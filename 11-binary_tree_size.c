#include "binary_trees.h"
/**
 * measures the size of a binary tree
 * @tree: pointer to the root node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t nodes;

    if (!tree)
        return (0);
    nodes = binary_tree_size(tree->left);
    nodes = binary_tree_size(tree->right);
    return (nodes + 1);
}
