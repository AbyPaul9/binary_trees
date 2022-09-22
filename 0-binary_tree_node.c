#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @prmParent: parent node
 * @prmValue: node value
 *
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *prmParent, int prmValue)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = prmParent;
	new->n = prmValue;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
