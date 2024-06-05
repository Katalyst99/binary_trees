#include "binary_trees.h"

int leaf_depth(const binary_tree_t *tree);
int _perfect(const binary_tree_t *tree, int dp, int level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * leaf_depth - measures the depth of leaf
 * @tree: A pointer to the root node of the tree to measure the depth
 * Return: The leaf depth
 */
int leaf_depth(const binary_tree_t *tree)
{
	int dp = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree != NULL)
	{
		tree = tree->left;
		dp++;
	}
	return (dp);
}

/**
 * _perfect - Function to check if tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * @dp: The leaf depth
 * @level: The current node level
 * Return: 1 if tree is perfect
 */
int _perfect(const binary_tree_t *tree, int dp, int level)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (dp == level + 1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return (_perfect(tree->left, dp, level + 1) &&
		_perfect(tree->right, dp, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: If tree is NULL, return 0 otherwise 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dp = 0;

	if (tree == NULL)
	{
		return (0);
	}
	dp = leaf_depth(tree);
	return (_perfect(tree, dp, 0));
}
