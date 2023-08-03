#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if leaf or 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree:is a pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	if (left_full == 0 || right_full == 0)
	{
		return (0);
	}
	return (1);
}
