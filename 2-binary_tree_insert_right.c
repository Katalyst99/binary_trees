#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (parent == NULL)
		return (NULL);
	nnode = binary_tree_node(parent, value);
	if (nnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		nnode->right = parent->right;
		parent->right = nnode;
		nnode->right->parent = nnode;
	}
	else
	{
		parent->right = nnode;
	}
	return (nnode);
}
