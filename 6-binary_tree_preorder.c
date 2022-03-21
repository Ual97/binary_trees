#include "binary_trees.h"
/**
 * goes through a binary tree using pre-order traversal
 * @tree: pointer to the node to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func || !(*func))
        return;
    (*func)(tree->n);
    if (tree->left)
        binary_tree_preorder(tree->left, func);
    if (tree->right)
        binary_tree_preorder(tree->right, func);
}
