#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor, NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *path1[1024], *path2[1024], *marker, *f, *s;
	int i, j;

	if (!second || !first)
		return (NULL);
	marker = NULL;
	f = (binary_tree_t *)first;
	s = (binary_tree_t *)second;
	/* last element will be NULL*/
	for (i = 0; f; i++)
	{
		path1[i] = f;
		f = f->parent;
	}
	for (j = 0; s; j++)
	{
		path2[j] = s;
		s = s->parent;
	}
	i--, j--;
	for (; path1[i] && path2[j]; i--, j--)
	{
		if (path1[i] == path2[j])
			marker = path1[i];
	}
	return (marker);
}
