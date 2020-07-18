#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: input node
 * Return: returns 1 for root or 0
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if ((node->right || node->left) && !(node->parent))
		return (1);
	else
		return (0);
}
