#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

    if (!tree)
        return (0);
    if ((tree->left && !(tree->right)) || (!(tree->left) && tree->right))
        return (0);
	else if (!(tree->left) && !(tree->right))
		return(1);
    full = binary_tree_is_full(tree->left);
	if (full != 0)
    	full = binary_tree_is_full(tree->right);
    return(full);
}
