#include "binary_trees.h"
/**
 * *binary_tree_insert_left - functions that insert node as the left-child of
 * another node
 * @parent: is a pointer to the parent node to insert the left-child in
 * @value: the value to insertin to the new node
 * Return: a pointer to the new node, or Null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild = NULL;

	if (!parent)
		return (NULL);
	leftChild = binary_tree_node(parent, value);
	if (!leftChild)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = leftChild;
		leftChild->left = parent->left;
	}
	parent->left = leftChild;

	return (leftChild);
}
