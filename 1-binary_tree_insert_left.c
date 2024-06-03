#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
		return (NULL);

	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (NULL);

	nnode->parent = parent;
	nnode->n = value;
	nnode->left = NULL;
	nnode->right = NULL;

	if (parent->left != NULL)
	{
		nnode->left = parent->left;
		parent->left = nnode;
		nnode->left->parent = nnode;
	}
	parent->left = nnode;

	return (nnode);
}
