#include "binary_trees.h"

/**
 * postorder_traverse - Traverses a binary tree in post-order
 * @tree: Pointer to the current node
 * @func: Function to call for each node value
 */
static void postorder_traverse(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	postorder_traverse(tree->left, func);
	postorder_traverse(tree->right, func);
	func(tree->n);
}

/**
 * binary_tree_postorder - Goes through a binary tree using post-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	postorder_traverse(tree, func);
}
