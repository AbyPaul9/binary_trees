#include "binary_trees.h"

/**
 * countNode - count node number of a tree
 *
 * @prmTree: tree node
 *
 * Return: node number
 */
int countNode(const binary_tree_t *prmTree)
{
	if (prmTree == NULL)
		return (0);
	return (1 + countNode(prmTree->left) + countNode(prmTree->right));
}

/**
 * isComplete - check if a tree is complete
 *
 * @prmTree: tree node
 * @prmIndex: index of the browsed node
 * @prmNodeNumber: nodeNumber
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int isComplete(const binary_tree_t *prmTree, int prmIndex, int prmNodeNumber)
{
	if (prmTree == NULL)
		return (1);

	if (prmIndex >= prmNodeNumber)
		return (0);

	return (
		isComplete(prmTree->left, 2 * prmIndex + 1, prmNodeNumber) &&
		isComplete(prmTree->right, 2 * prmIndex + 2, prmNodeNumber)
	);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @prmTree: tree node
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int binary_tree_is_complete(const binary_tree_t *prmTree)
{
	int nodeNumber = 0;

	if (prmTree == NULL)
		return (0);

	nodeNumber = countNode(prmTree);

	if (nodeNumber > 0)
		return (isComplete(prmTree, 0, nodeNumber));
	else
		return (0);
}
