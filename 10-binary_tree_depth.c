#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of tree, 0 if no tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t sum;

	if (!tree)
		return (0);
	if (!(tree->parent))
		return (0);
	sum = binary_tree_depth(tree->parent) + 1;
	return (sum);
}
