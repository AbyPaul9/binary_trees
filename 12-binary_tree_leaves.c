#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @prmTree: tree to count
 *
 * Return: tree count
 */
size_t binary_tree_leaves(const binary_tree_t *prmTree)
{
	size_t lLeaves, rLeaves;

	if (prmTree == NULL)
		return (0);

	if (prmTree->left == NULL && prmTree->right == NULL)
		return (1);

	lLeaves = binary_tree_leaves(prmTree->left);
	rLeaves = binary_tree_leaves(prmTree->right);

	return (lLeaves + rLeaves);
}
