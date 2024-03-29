#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node,
 *	or NULL if none found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *p, *q;

	if (first == NULL || second == NULL)
		return (NULL);

	p = first;
	while (p != NULL)
	{
		q = second;
		while (q != NULL)
		{
			if (p == q)
				return ((binary_tree_t *)p);
			q = q->parent;
		}
		p = p->parent;
	}
	return (NULL);
}
