#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 *
 * @tree: pointer to tree
 *
 * Return: 0 if tree is NULL
 * or height
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height += 1 + binary_tree_height(tree->left);


	if (tree->right != NULL)
		right_height += 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
