#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 *
 * @prmTree: tree node
 *
 * Return: right rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *prmTree)
{
	binary_tree_t *parent, *left;

	if (prmTree == NULL)
		return (NULL);

	parent = prmTree->parent;
	left = prmTree->left;
	prmTree->left = left->right;

	left->right = prmTree;
	prmTree->parent = left;
	left->parent = parent;

	if (prmTree->left)
		prmTree->left->parent = prmTree;

	return (left);
}
