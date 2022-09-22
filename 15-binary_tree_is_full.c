#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @prmTree: tree node
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int binary_tree_is_full(const binary_tree_t *prmTree)
{
	int lFull, rFull;

	if (prmTree == NULL)
		return (0);

	if (prmTree->left == NULL && prmTree->right == NULL)
		return (1);

	lFull = binary_tree_is_full(prmTree->left);
	rFull = binary_tree_is_full(prmTree->right);

	return (lFull * rFull);
}
