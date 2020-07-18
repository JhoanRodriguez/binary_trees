#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 *
 * Description: If tree is NULL, return 0
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t counterLeft = 0;
	size_t counterRight = 0;

	if (!tree)
		return (0);

	if (tree->right)
		counterRight = binary_tree_balance(tree->right) + 1;
	if (tree->left)
		counterLeft = binary_tree_balance(tree->left) + 1;

	return (counterLeft - counterRight);
}
