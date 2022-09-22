#include "binary_trees.h"

/**
 * isBST - Compare node in order to check if a given
 *
 * @prmTree: tree node
 * @prmMin: min allowed value
 * @prmMax: max allowed value
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int isBST(const binary_tree_t *prmTree, int prmMin, int prmMax)
{
	if (prmTree == NULL)
		return (1);

	if (prmTree->n < prmMin || prmTree->n > prmMax)
		return (0);

	return (
		isBST(prmTree->left, prmMin, prmTree->n - 1) &&
		isBST(prmTree->right, prmTree->n + 1, prmMax)
	);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 *
 * @prmTree: tree node
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int binary_tree_is_bst(const binary_tree_t *prmTree)
{
	if (prmTree == NULL)
		return (0);

	return (isBST(prmTree, INT_MIN, INT_MAX));
}
