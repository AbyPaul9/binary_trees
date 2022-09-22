#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @prmTree: tree to delete
 */
void binary_tree_delete(binary_tree_t *prmTree)
{
	if (!prmTree)
		return;

	binary_tree_delete(prmTree->left);
	binary_tree_delete(prmTree->right);

	free(prmTree);
}
