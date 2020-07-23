#include "binary_trees.h"

/**
 * binary_tree_height - checks for the height of a node
 * @tree: input tree
 * Return: height
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counterLeft = 0;
	size_t counterRight = 0;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->right)
		counterRight = binary_tree_height(tree->right) + 1;
	if (tree->left)
		counterLeft = binary_tree_height(tree->left) + 1;

	if (counterLeft > counterRight)
		return (counterLeft);
	else
		return (counterRight);
}

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
	int counterLeft = 0;
	int counterRight = 0;

	if (!tree)
		return (0);

	counterLeft = binary_tree_height(tree->left);
	counterRight = binary_tree_height(tree->right);

	if (tree->right)
	{
		if (tree->right->left == NULL && tree->right->right == NULL)
		counterRight = 1;
	}
	if (tree->left)
	{
		if (tree->left->left == NULL && tree->left->right == NULL)
		counterLeft = 1;
	}
	return (counterLeft - counterRight);
}
