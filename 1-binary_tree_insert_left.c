#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as a leftchild of another
 *	node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: data to store in the new node
 * Return: pointer to created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *oldleft;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	oldleft = parent->left;

	parent->left = newnode;
	newnode->left = oldleft;

	if (oldleft)
	{
		oldleft->parent = newnode;
	}
	return (newnode);
}
