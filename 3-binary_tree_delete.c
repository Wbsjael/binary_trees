#include "binary_trees.h"

/**
 * binary_tree_delete-delete entire binary tree and node reference is nullified
 * @tree: pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
