#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast a child
 *
 * @tree: pointer to tree
 *
 * Return: 0 if tree is NULL
 * or num of nodes
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);

		return (left + right + 1);
	}

	return (0);
}
