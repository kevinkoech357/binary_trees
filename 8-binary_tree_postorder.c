#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through
 * a binary tree using post_order traversal
 *
 * @tree: pointer to tree
 *
 * @func: function pointer to each node
 *
 * Return: void
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* recursively traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* recursively traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* set function to current node */
	func(tree->n);
}
