#include "binary_trees.h"
/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int balance, bst;

	if (!tree)
		return (0);
	balance = binary_tree_balance(tree);
	bst = binary_tree_is_bst(tree);
	if (balance > -2  && balance < 2 && bst)
		return (1);
	return (0);
}

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
