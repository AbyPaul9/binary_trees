#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @prmParent: parent node
 * @prmValue: node value
 *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *prmParent, int prmValue)
{
	binary_tree_t *new;

	if (prmParent == NULL)
		return (NULL);

	new = binary_tree_node(prmParent, prmValue);

	if (new == NULL)
		return (NULL);

	new->right = prmParent->right;

	if (new->right)
		new->right->parent = new;

	prmParent->right = new;

	return (new);
}
