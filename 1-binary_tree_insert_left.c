#include "binary_trees.h"

/**
 * binary_tree_insert_left - func that that creates a binary tree node with no children
 * @parent:is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * return: new node pointer or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;
        new_node = malloc(sizeof(binary_tree_t));

        if (new_node == NULL)
        {
                return(NULL);
        }
        else
        {
                new_node->n = value;
                new_node-> parent = parent;
                new_node->left = parent->left;
                new_node->right = NULL;
        }
        if (parent->left != NULL)
        {
                parent->left->parent = new_node;
        }

        parent->left = new_node;

        return(new_node);
}
