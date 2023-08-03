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
 * binary_tree_height - measures heiht of a binary tree
 * @tree:is a pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (1 + left_height);
	return (1 + right_height);
}


/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree:is a pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	if (left == NULL || right == NULL)
		return (0);
	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}

	return (0);
}
