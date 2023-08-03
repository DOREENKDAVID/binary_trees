#include "binary_tree.h"

/**
 * binary_trees_ancestor -finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return:pointer to lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *node;

	if (first == NULL || second == NULL)
		return (NULL);
	node = (binary_tree_t *)second;

	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;

		}
		second = node;
		first = fist->parent;
	}
}
