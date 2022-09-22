#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @prmParent: parent node
 * @prmValue: node value
 *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *prmParent, int prmValue)
{
	binary_tree_t *new;

	if (prmParent == NULL)
		return (NULL);

	new = binary_tree_node(prmParent, prmValue);

	if (new == NULL)
		return (NULL);

	new->left = prmParent->left;

	if (new->left)
		new->left->parent = new;

	prmParent->left = new;

	return (new);
}
