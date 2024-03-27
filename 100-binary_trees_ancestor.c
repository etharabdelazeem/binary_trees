#include "binary_trees.h"
<<<<<<< HEAD
=======

>>>>>>> 1f633586a8e2d2d581c6290e2be6eaacf0741abe
/**
 *binary_tree_ancestor - finds the lowest common ancestor of two nodes.
 *@first: A pointer to the first node.
 *@second: A pointer to the second node.
 *
 *Return: A pointer to the lowest common ancestor node of the two given nodes.
 *		Or NULL, If no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
	{
	return ((binary_tree_t *)first);
	}
	else if (first->parent == second)
	{
		return (first->parent);
	}
	else if (first == second->parent)
	{
		return ((binary_tree_t *)first);
	}
	else
<<<<<<< HEAD
		return (NULL);
=======
		return (binary_trees_ancestor(first->parent, second->parent));
>>>>>>> 1f633586a8e2d2d581c6290e2be6eaacf0741abe
}
