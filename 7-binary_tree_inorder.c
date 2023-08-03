#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a tree in inorder manner
 *
 * @tree: pointer to tree
 *
 * @func: function pointer to call for each node
 *
 * Return: void
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* set func pointer to current node */
	func(tree->n);

	/* traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
