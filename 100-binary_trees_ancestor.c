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
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @prmFirst: first node
 * @prmSecond: seoncd node
 *
 * Return: lower common ancestor
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *prmFirst,
	const binary_tree_t *prmSecond
) {
	size_t fHeight, sHeight;

	if (prmFirst == NULL || prmSecond == NULL)
		return (NULL);

	if (prmFirst == prmSecond)
		return ((binary_tree_t *) prmFirst);

	fHeight = binary_tree_height(prmFirst);
	sHeight = binary_tree_height(prmSecond);

	if (prmSecond->parent && sHeight < fHeight)
		return (binary_trees_ancestor(prmFirst, prmSecond->parent));
	else if (prmFirst->parent && fHeight < sHeight)
		return (binary_trees_ancestor(prmFirst->parent, prmSecond));
	else if (prmFirst->parent && prmSecond->parent)
		return (binary_trees_ancestor(prmFirst->parent, prmSecond->parent));
	else
		return (NULL);
}
