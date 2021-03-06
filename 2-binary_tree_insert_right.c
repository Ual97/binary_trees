#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *aux;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	if (parent->right)
	{
		aux = parent->right;
		parent->right = new;
		new->parent = parent;
		aux->parent = new;
		new->right = aux;
	}
	else
	{
		new->parent = parent;
		parent->right = new;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
