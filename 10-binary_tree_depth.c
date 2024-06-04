#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: The depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dp = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		tree = tree->parent;
		dp++;
	}
	return (dp);
}
