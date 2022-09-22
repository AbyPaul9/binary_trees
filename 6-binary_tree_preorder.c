#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @prmTree: tree to preorder
 * @prmFunc: callback
 */
void binary_tree_preorder(const binary_tree_t *prmTree, void (*prmFunc)(int))
{
	if (prmTree == NULL || prmFunc == NULL)
		return;

	prmFunc(prmTree->n);
	binary_tree_preorder(prmTree->left, prmFunc);
	binary_tree_preorder(prmTree->right, prmFunc);
}
