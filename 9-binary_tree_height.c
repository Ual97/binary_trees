#include "binary_trees.h"
/**
 * measures the height of a binary tree
 * @tree: pointer to the node to measure the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t leftsum;
    size_t rightsum;

    if (!tree)
        return (0);
    if (!(tree->left) && !(tree->right))
        return (0);
    leftsum = binary_tree_height(tree->left);
    rightsum = binary_tree_height(tree->right);
    if (rightsum >= leftsum)
        return (rightsum + 1);
    else
        return (leftsum + 1);
}
