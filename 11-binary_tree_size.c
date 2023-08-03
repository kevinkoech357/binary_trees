#include "binary_trees.h"

/**
 * binary_tree_size - measure size of a tree
 *
 * @tree: pointer to tree
 *
 * Return: 0 if tree is NULL
 * or size of tree
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
