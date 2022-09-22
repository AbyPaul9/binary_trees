#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 *
 * @prmArray: a pointer to the first element of the array to be converted
 * @prmSize: the number of element in the array
 *
 * Return: a pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *prmArray, size_t prmSize)
{
	size_t cLoop;
	bst_t *tree = NULL;

	for (cLoop = 0; cLoop < prmSize; cLoop++)
		bst_insert(&tree, prmArray[cLoop]);

	return (tree);
}
