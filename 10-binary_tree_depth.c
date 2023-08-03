#include "binary_trees.h"


/**
 * binary_tree_depth - measures depth of a tree
 *
 * @tree: pointer to tree
 *
 * Return: 0 if tree is NULL
 *
 * or depth
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth += 1 + binary_tree_depth(tree->parent);

	return (depth);
}
