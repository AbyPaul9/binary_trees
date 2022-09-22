#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @prmNode: node
 *
 * Return: brother node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *prmNode)
{
	binary_tree_t *parent;

	if (prmNode == NULL || prmNode->parent == NULL)
		return (NULL);

	parent = prmNode->parent;

	if (parent->left == prmNode)
		return (parent->right);
	return (parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @prmNode: node
 *
 * Return: node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *prmNode)
{
	binary_tree_t *parent;

	if (prmNode == NULL || prmNode->parent == NULL)
		return (NULL);

	parent = prmNode->parent;

	return (binary_tree_sibling(parent));
}
