#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, return 0 or the leaves counted
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lvs_l = 0, lvs_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	lvs_l = binary_tree_leaves(tree->left);
	lvs_r = binary_tree_leaves(tree->right);
	return (lvs_l + lvs_r);
}
