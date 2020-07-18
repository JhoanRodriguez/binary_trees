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
