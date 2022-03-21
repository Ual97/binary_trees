#include "binary_trees.h"

/**
 * function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new, *aux;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return NULL;
    
    new->n = value;
    if (parent->left)
    {
        aux = parent->left;
        parent->left = new;
        new->left = aux;
    }
    else
    {
        parent->left = new;
    }
    new->left = NULL;
    new->right = NULL;
    return (new);
}
