#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 *
 * @tree: pointer to tree
 *
 * Return: 0 if tree is NULL
 * 1 if left and right nodes have zero children
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		return (left && right);
	}

	return (0);
}
