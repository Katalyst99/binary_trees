#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: If tree is NULL, return 0 otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_l = 0, full_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		full_l = binary_tree_is_full(tree->left);
		full_r = binary_tree_is_full(tree->right);
		return (full_l && full_r);
	}
	return (0);


}
