#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: given a pointer to the root of a node
 *  the node of the tree to count the number of leaves
 *
 * NULL pointer is not a leaf
 *
 * Return: if tree is NULL, 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	if (!tree->left && !tree->right)
	return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
