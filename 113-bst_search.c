#include "binary_trees.h"
/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing number equal to value, else NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node, *t;

	t = (bst_t *)tree;
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return (t);
	if (value < tree->n)
	{
		if (!tree->left)
			return (NULL);
		node = bst_search(tree->left, value);
	}
	else if (value > tree->n)
	{
		if (!tree->right)
			return (NULL);
		node = bst_search(tree->right, value);
	}
	return (node);
}
