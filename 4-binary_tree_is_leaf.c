#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @prmNode: node to check
 *
 * Return: SUCCESS: 1
 *         FAILED: 0
 */
int binary_tree_is_leaf(const binary_tree_t *prmNode)
{
	if (prmNode == NULL)
		return (0);

	if (prmNode->left == NULL && prmNode->right == NULL)
		return (1);

	return (0);
}
