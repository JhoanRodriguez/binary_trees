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
	{
		counter = 1;
		counter = counter * binary_tree_is_full(tree->left)
			* binary_tree_is_full(tree->right);
	}
	else if (!(tree->right) && !(tree->left))
		counter = 1;
	else
		counter = 0;

	return (counter);
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
	int len_left = 0;
	int len_right = 0;
	int perfect = 0;

	if (!tree)
		return (0);

	len_left = (int) binary_tree_height(tree->left);
	len_right = (int) binary_tree_height(tree->right);
	if (len_right == len_left)
		perfect = 1;
	if (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right) == 1)
		return (1 * perfect);
	else
		return (0);
}
