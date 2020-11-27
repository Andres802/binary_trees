#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if the binary tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, nodes;

	if (!tree)
		return (0);
	h = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	return ((_pow_recursion(2, h + 1) - 1) == nodes);
}
/**
 * _pow_recursion - function to calculate the power of x number y times
 * @x: number
 * @y: power
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_height(tree->left));
	return (1 + binary_tree_height(tree->right));
}
