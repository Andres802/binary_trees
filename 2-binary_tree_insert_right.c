#include "binary_trees.h"
/**
 * *binary_tree_insert_right - functions that insert node as the right-child of
 * another node
 * @parent: is a pointer to the parent node to insert the left-child in
 * @value: the value to insertin to the new node
 * Return: a pointer to the new node, or Null on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild = NULL;

	if (!parent)
		return (NULL);
	rightChild = binary_tree_node(parent, value);
	if (!rightChild)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = rightChild;
		rightChild->right = parent->right;
	}
	parent->right = rightChild;

	return (rightChild);
}
