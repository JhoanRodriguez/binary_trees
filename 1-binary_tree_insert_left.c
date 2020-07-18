#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node ot the left of parent node
 * @parent: pointer to the parent ot root of tree
 * @value: value to be inserted into new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!parent || !new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}

