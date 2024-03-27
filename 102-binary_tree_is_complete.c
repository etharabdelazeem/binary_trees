#include "binary_trees.h"
#include "16-binary_tree_is_perfect.c"
#include "4-binary_tree_is_leaf.c"
/**
 * tree_height - calculate height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if it is complete 0 if not, 0 if tree is NULL.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	l_height = tree_height(tree->left);
	r_height = tree_height(tree->right);
	
	if (l_height == r_height)
	{
		if (binary_tree_is_perfect(tree->left)
			       	&& binary_tree_is_complete(tree->right))
			return (1);
	}
	else if (l_height == r_height + 1)
	{
		if (binary_tree_is_complete(tree->left)
			       	&& binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
