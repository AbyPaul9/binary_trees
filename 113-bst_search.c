#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 *
 * @prmTree: tree node
 * @prmValue: value to search
 *
 * Return: a pointer to the node containing a value equals to value
 */
bst_t *bst_search(const bst_t *prmTree, int prmValue)
{
	if (prmTree == NULL || prmTree->n == prmValue)
		return ((binary_tree_t *) prmTree);

	if (prmValue < prmTree->n)
		return (bst_search(prmTree->left, prmValue));
	return (bst_search(prmTree->right, prmValue));
}
