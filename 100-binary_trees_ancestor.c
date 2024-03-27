#include "binary_trees.h"
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
	
	if (first == second->parent || !first->parent ||
			(!first->parent->parent && second->parent))
		return (binary_trees_ancestor(first, second->parent));
	else if (first->parent == second || !second->parent ||
			(!second->parent->parent && first->parent))
		return (binary_trees_ancestor(first->parent, second));
	else
		return (binary_trees_ancestor(first->parent, second->parent));
}
