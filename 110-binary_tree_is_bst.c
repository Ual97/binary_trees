#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int bst;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
	{
		if (tree->left->n < tree->n)
			bst = binary_tree_is_bst(tree->left);
		else
			return (0);
	}
	else
		bst = 1;
	if (tree->right && bst)
	{
		if (tree->right->n > tree->n)
			bst = binary_tree_is_bst(tree->right);
		else
			return (0);
	}
	return (bst);
}
