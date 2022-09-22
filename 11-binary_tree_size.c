#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @prmTree: tree to measure
 *
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *prmTree)
{
	size_t lHeight, rHeight;

	if (prmTree == NULL)
		return (0);

	lHeight = binary_tree_size(prmTree->left);
	rHeight = binary_tree_size(prmTree->right);

	return (
		lHeight +
		1 + rHeight
	);
}
