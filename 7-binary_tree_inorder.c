#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In-order traversal visits nodes in this order:
 * Left child -> Parent -> Right child.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* 1. Aller à gauche */
	binary_tree_inorder(tree->left, func);

	/* 2. Action sur le nœud actuel */
	func(tree->n);

	/* 3. Aller à droite */
	binary_tree_inorder(tree->right, func);
}