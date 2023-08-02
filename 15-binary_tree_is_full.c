#include "binary_trees.h"

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
		return (1);
	if ((tree->left == NULL && tree->right == NULL) ||
			(tree->left != NULL && tree->right != NULL))
	{
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	return (left_full && right_full);
	}
	return (0);
}
