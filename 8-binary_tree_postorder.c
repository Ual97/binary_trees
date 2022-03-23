#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through bin tree using post-order traversal
 * @tree: pointer to the node to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func || !(*func))
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
