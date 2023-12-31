#include "binary_trees.h"

/**
 * binary_tree_node - func that creates a binary tree node with no children
 * @parent:is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: new node pointer or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}
