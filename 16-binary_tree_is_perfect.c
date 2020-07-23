#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: input node
 * Return: 1 for leaf or 0
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);

	return (1);
}

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

	if (!tree)
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
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the rood node of tree to check
 * Return: Null = 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (l == NULL || r == NULL)
		return (0);
	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}