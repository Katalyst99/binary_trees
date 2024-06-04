#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	if (lh >= rh)
	{
		return (lh + 1);
	}
	return (rh + 1);
}
