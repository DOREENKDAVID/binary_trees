#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
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
 * binary_tree_level - gets the level of a binary tree
 * @tree:is a pointer to the root node of the tree to measure the level.
 * @level:level of binary tree
 * @func: is a pointer to a function to call for each node
 * Return: 0 If tree is NULL
 */

void binary_tree_level(const binary_tree_t *tree, size_t level,
		void (*func)(int))
{

	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		if (level > 1)
		{
			binary_tree_level(tree->left, level - 1, func);
			binary_tree_level(tree->right, level - 1, func);
		}
	}
}

/**
 * binary_tree_levelorder -traverse a binary tree using level-order traversal
 * @tree:is a pointer to the root node of the tree to measure the level.
 * @func: is a pointer to a function to call for each node
 * Return: 0 If tree is NULL
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);

	for (level = 1; level <= height; level++)
		binary_tree_level(tree, level, func);
}
