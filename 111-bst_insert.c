#include "binary_trees.h"

/**
 * bst_insert - inserts a value in an AVL Tree
 *
 * @prmTree: tree node
 * @prmValue: node value
 *
 * Return: new node
 */
bst_t *bst_insert(bst_t **prmTree, int prmValue)
{
	bst_t *new, *tree;

	if (prmTree == NULL || *prmTree == NULL)
	{
		new = binary_tree_node(NULL, prmValue);
		*prmTree = new;
		return (new);
	}

	tree = *prmTree;

	while (tree != NULL)
	{
		if (tree->n == prmValue)
			return (NULL);
		if (tree->n > prmValue)
		{
			if (tree->left == NULL)
			{
				tree->left = binary_tree_node(tree, prmValue);
				return (tree->left);
			}
			tree = tree->left;
		}
		if (tree->n < prmValue)
		{
			if (tree->right == NULL)
			{
				tree->right = binary_tree_node(tree, prmValue);
				return (tree->right);
			}
			tree = tree->right;
		}
	}

	return (NULL);
}
