#include "binary_trees.h"
/**
 *  function that counts the leaves in a binary tree
 * @tree: pointer to the root node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves;

    if (!tree)
        return (0);
    leaves = binary_tree_leaves(tree->left);
    leaves += binary_tree_leaves(tree->right);
    if ((tree->left == NULL) && (tree->right == NULL))
    {
        leaves += 1;
    }
    return (leaves);
}
