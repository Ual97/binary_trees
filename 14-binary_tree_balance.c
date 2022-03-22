#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the node to measure the height
 * Return: height of bin tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftsum;
	size_t rightsum;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	leftsum = binary_tree_height(tree->left);
	rightsum = binary_tree_height(tree->right);
	if (rightsum >= leftsum)
		return (rightsum + 1);
	else
		return (leftsum + 1);
}
/**
 * binary_tree_balance - measures the balance of the binary tree
 * @tree: pointer to the node to measure the height
 * Return: balance of bin tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hleft, hright, balance;

	if (!tree)
		return (0);
	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);
	balance = hleft - hright;
	return ((int)balance);
}
