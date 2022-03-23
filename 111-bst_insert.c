#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree:
 * @value:
 * Return: .
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (!(*tree))
		return (binary_tree_node(*tree, value));
	if (!tree->left)
	{
		if (value < tree->n)
			return (binary_tree_node(*tree, value))
	}
	if (!tree->right)
    {
        if (value > tree->n)
            return (binary_tree_node(*tree, value))
    }
}
