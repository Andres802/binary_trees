#include "binary_trees.h"
/**
 * *binary_tree_is_leaf -  function that checks if a given node is a leaf
 * @node: s a pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 * if node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*check if there is not a left or right child*/
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
