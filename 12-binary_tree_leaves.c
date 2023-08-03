#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves
 *
 * @tree: pointer to tree
 *
 * Return: 0 if tree is NULL
 * of num of leaves
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;

	if (tree == NULL)
		return (0);

	/* check if current node has children. if it doesnt. its a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* recursively count the leaves */
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
