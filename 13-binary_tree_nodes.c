#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: number of nodes, 0 if no tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	nodes = binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if (!(tree->left == NULL) || !(tree->right == NULL))
		nodes += 1;
	return (nodes);
}
