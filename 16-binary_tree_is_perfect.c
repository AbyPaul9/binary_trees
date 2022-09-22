#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @prmTree: tree to measure
 *
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *prmTree)
{
	size_t lHeight, rHeight;

	if (prmTree == NULL)
		return (0);

	lHeight = prmTree->left ? 1 + binary_tree_height(prmTree->left) : 0;
	rHeight = prmTree->right ? 1 + binary_tree_height(prmTree->right) : 0;
	return (lHeight > rHeight ? lHeight : rHeight);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @prmTree: tree to check
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int binary_tree_is_perfect(const binary_tree_t *prmTree)
{
	size_t lPerfect, rPerfect, lHeight, rHeight;

	if (prmTree == NULL)
		return (0);

	if (prmTree->left == NULL && prmTree->right == NULL)
		return (1);

	if (prmTree->left == NULL || prmTree->right == NULL)
		return (0);

	lHeight = binary_tree_height(prmTree->left);
	rHeight = binary_tree_height(prmTree->right);

	if (lHeight != rHeight)
		return (0);

	lPerfect = binary_tree_is_perfect(prmTree->left);
	rPerfect = binary_tree_is_perfect(prmTree->right);

	return (lPerfect && rPerfect);
}
