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

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance, full;

	balance = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);
	if (!balance && full)
		return (1);
	return (0);
}
