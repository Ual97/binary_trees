#include "binary_trees.h"
/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL if no node or uncle, else pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gfather;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return(NULL);
	if (!(node->parent->parent))
		return(NULL);
	gfather = node->parent->parent;
	if (gfather->left && gfather->right)
	{
		if (node->parent == gfather->left)
			return (gfather->right);
		else
			return (gfather->left);
	}
	return (NULL);
}
