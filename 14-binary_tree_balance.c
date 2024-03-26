#include "binary_trees.h"

/**
 * tree_height - calculate height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			h_left = tree->left ? 1 + tree_height(tree->left) : 1;
			h_right = tree->right ? 1 + tree_height(tree->right) : 1;
		}
		return ((h_left > h_right) ? h_left : h_right);
	}
}

/**
 * binary_tree_balance - calculate balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)tree_height(tree->left));
		right = ((int)tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
