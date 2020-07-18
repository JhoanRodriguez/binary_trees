#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - checks for the depth of a ndoe
 * @tree: input tree
 * Return: depth
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		counter = binary_tree_depth(tree->parent) + 1;
	else
		return (0);

	return (counter);
}
