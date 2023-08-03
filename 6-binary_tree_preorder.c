#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through
 * a binary tree using pre_order traversal
 *
 * @tree: pointer to tree
 *
 * @func: function pointer to each node
 *
 * Return: void
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	/* recursively traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* recursively traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
