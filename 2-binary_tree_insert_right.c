#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node ot the right of parent node
 * @parent: pointer to the parent ot root of tree
 * @value: value to be inserted into new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!parent || !new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);

}
