#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of
 *	another node
 *
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: newnode or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *oldright;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;
	newnode->parent = parent;

	oldright = parent->right;

	parent->right = newnode;
	newnode->right = oldright;

	if (oldright)
	{
		oldright->parent = newnode;
	}
	return (newnode);
}
