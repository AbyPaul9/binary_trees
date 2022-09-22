#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @prmNode: node to check
 *
 * Return: SUCCESS: 1
 *         FAILED:  0
 */
int binary_tree_is_root(const binary_tree_t *prmNode)
{
	if (prmNode == NULL)
		return (0);

	if (prmNode->parent == NULL)
		return (1);

	return (0);
}
