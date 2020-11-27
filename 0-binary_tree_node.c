#include "binary_trees.h"
/**
 * *binary_tree_node - functions that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: the value to insertin to the new node
 * Return: a pointer to the new node, or Null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
