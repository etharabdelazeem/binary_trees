#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, your function must return 0, else return size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t size = 1;

		if (tree->left != NULL)
			size = size + binary_tree_size(tree->left);
		if (tree->right != NULL)
			size = size + binary_tree_size(tree->right);

		return (size);
	}
	return (0);
}
