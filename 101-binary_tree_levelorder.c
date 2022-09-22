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
 * executeSameLevel - execute callback for all element sharing same level
 *
 * @prmTree: tree node
 * @prmLevel: level to compare
 * @prmFunc: callback
 */
void executeSameLevel(
	const binary_tree_t *prmTree,
	int prmLevel,
	void (*prmFunc)(int)
) {
	if (prmTree == NULL)
		return;
	if (prmLevel == 0)
		prmFunc(prmTree->n);
	else
	{
		executeSameLevel(prmTree->left, prmLevel - 1, prmFunc);
		executeSameLevel(prmTree->right, prmLevel - 1, prmFunc);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 *                          traversal
 *
 * @prmTree: tree node
 * @prmFunc: callback
 */
void binary_tree_levelorder(const binary_tree_t *prmTree, void (*prmFunc)(int))
{
	int depth, heightTotal;

	if (prmTree == NULL || prmFunc == NULL)
		return;

	heightTotal = binary_tree_height(prmTree);

	for (depth = 0; depth <= heightTotal; depth++)
		executeSameLevel(prmTree, depth, prmFunc);
}
