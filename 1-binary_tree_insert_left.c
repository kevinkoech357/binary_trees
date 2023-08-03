#include "binary_trees.h"

/**
 * *binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 *
 * @parent: pointer to parent/root
 *
 * @value: data to be inserted
 *
 * Return: pointer to new node
 * or NULL if parent is NULL
 * or upon failure
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}

	parent->left = new_node;
	
	return (new_node);
}
