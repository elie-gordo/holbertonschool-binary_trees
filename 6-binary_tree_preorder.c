#include "binary_trees.h"

/**
 * preorder_traverse - Traverses a binary tree in pre-order
 * @tree: Pointer to the current node
 * @func: Function to call for each node value
 */
static void preorder_traverse(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	preorder_traverse(tree->left, func);
	preorder_traverse(tree->right, func);
}

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	preorder_traverse(tree, func);
}
