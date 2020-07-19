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
 * binary_tree_nodes - Function that counts the nodes at a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If the node is has a child and how much.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree) || !tree)
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}