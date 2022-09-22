#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @prmTree: tree to measure
 *
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *prmTree)
{
	size_t depth;

	if (prmTree == NULL)
		return (0);

	depth = prmTree->parent ? 1 + binary_tree_depth(prmTree->parent) : 0;

	return (depth);
}
