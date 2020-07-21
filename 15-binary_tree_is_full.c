#include "binary_trees.h"

/**
 * binary_tree_is_full - function to check if binary tree is full
 * @tree: tree
 * Return: return value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int counter = 0;

	if (!tree)
		return (0);

	if (tree->right && tree->left)
		counter = 1;
	else if (!(tree->right) && !(tree->left))
		counter = 1;
	else
		counter = 0;

	if (tree->left || tree->right)
		return (counter * binary_tree_is_full(tree->left) *
				binary_tree_is_full(tree->right));

	return (counter);
}
