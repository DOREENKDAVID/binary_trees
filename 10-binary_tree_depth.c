#include "binary_trees.h"

/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: 0 If tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth;

	if (tree == NULL)
		return (0);

	tree_depth = 0;

	while (tree->parent != NULL)
	{
		tree_depth++;
		tree = tree->parent;
	}
	return (tree_depth);
}
