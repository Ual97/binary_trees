#include "binary_trees.h"
/**
 *  function that counts the leaves in a binary tree
 * @tree: pointer to the root node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t nodes;

    if (!tree)
        return (0);
    nodes = binary_tree_size(tree->left);
    nodes += binary_tree_size(tree->right);
    if ((tree->left == NULL) && (tree->right == NULL))
    {
        return (nodes + 1);
    }
}
