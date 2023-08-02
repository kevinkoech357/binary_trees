#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a
 * binary tree node
 *
 * @parent: pointer to root/parent
 *
 * @value: data to be inserted
 *
 * Return: Pointer to new_node
 * or NULL upon failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* creating new_node */
	binary_tree_t *new_node;

	/* allocating memory to new_node */
	new_node = malloc(sizeof(binary_tree_t));

	/* checking if memory was dynamically allocated */
	if (new_node == NULL)
		return (NULL);

	/* creating new_node with zero children */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}


