#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find a sibling of node
 * @node: node to use to find a sibling
 * Return: sibling of node else 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - function that finds uncle of a node
 * @node: node to find the uncle of
 * Return: Null else ptr to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
