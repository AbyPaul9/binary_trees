#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using
 *                         post-order traversal
 *
 * @prmTree: tree to postorder
 * @prmFunc: callback
 */
void binary_tree_postorder(const binary_tree_t *prmTree, void (*prmFunc)(int))
{
	if (prmTree == NULL || prmFunc == NULL)
		return;

	binary_tree_postorder(prmTree->left, prmFunc);
	binary_tree_postorder(prmTree->right, prmFunc);
	prmFunc(prmTree->n);
}
