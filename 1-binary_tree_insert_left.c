#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node with left child
 * @parent:is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: new node pointer or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = binary_tree_node(parent, value);

	if (left_child == NULL)
	{
		return (NULL);
	}

	left_child->left = parent->left;

	if (left_child->left != NULL)
	{
		left_child->left->parent = left_child;
	}

	parent->left = left_child;

	return (left_child);
}
