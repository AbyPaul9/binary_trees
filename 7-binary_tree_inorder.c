#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @prmTree: tree to inorder
 * @prmFunc: callback
 */
void binary_tree_inorder(const binary_tree_t *prmTree, void (*prmFunc)(int))
{
	if (prmTree == NULL || prmFunc == NULL)
		return;

	binary_tree_inorder(prmTree->left, prmFunc);
	prmFunc(prmTree->n);
	binary_tree_inorder(prmTree->right, prmFunc);
}
