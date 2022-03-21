#include "binary_trees.h"
/**
 * Write a function that checks if a given node is a root
 * @tree: pointer to the node to check
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->parent)
        return (1);
    else
        return (0);
}
