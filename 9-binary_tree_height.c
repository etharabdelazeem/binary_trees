#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t h_left = 0, h_right = 0;

		if (tree->left != NULL)
			h_left = 1 + binary_tree_height(tree->left);

		if (tree->right != NULL)
			h_right = 1 + binary_tree_height(tree->right);

		return ((h_left > h_right) ? h_left : h_right);
	}
	return (0);
}
