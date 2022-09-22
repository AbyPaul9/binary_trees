#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @prmTree: tree to count
 *
 * Return: tree count
 */
size_t binary_tree_nodes(const binary_tree_t *prmTree)
{
	size_t lHeight, rHeight;

	if (
		prmTree == NULL || (
			prmTree->left == NULL && prmTree->right == NULL
		)
	)
		return (0);

	lHeight = binary_tree_nodes(prmTree->left);
	rHeight = binary_tree_nodes(prmTree->right);

	return (
		lHeight +
		1 + rHeight
	);
}
