#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node with right child
 * @parent:is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: new node pointer or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
	{
		return (NULL);
	}
	else
	{
		right_child->n = value;
		right_child->parent = parent;
		right_child->right = parent->right;
		right_child->left = NULL;
	}
	if (parent->right != NULL)
	{
		parent->right->parent = right_child;
	}

	parent->right = right_child;

	return (right_child);
}
