#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the reated node or NULL on failure or
 * if parent is NULL it typically means that the node is the root of the tree.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
	return (NULL);

	if (!(parent->right))
	parent->right = new;
	else
	{
		/* ijserting to the right*/
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}
	return (new);
}
