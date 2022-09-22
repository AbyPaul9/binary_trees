#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 *
 * @prmTree: tree node
 *
 * Return: left rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *prmTree)
{
	binary_tree_t *parent, *right;

	if (prmTree == NULL)
		return (NULL);

	parent = prmTree->parent;
	right = prmTree->right;
	prmTree->right = right->left;

	right->left = prmTree;
	prmTree->parent = right;
	right->parent = parent;

	return (right);
}
