#include "binary_trees.h"

/**
 * tree_height_nodes - Measures height in number of nodes
 * @tree: Pointer to the root node
 *
 * Return: Height in nodes
 */
static size_t tree_height_nodes(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = tree_height_nodes(tree->left);
	right_h = tree_height_nodes(tree->right);

	if (left_h > right_h)
		return (left_h + 1);

	return (right_h + 1);
}

/**
 * tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Number of nodes
 */
static size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, expected_nodes, i;

	if (tree == NULL)
		return (0);

	height = tree_height_nodes(tree);
	nodes = tree_size(tree);
	expected_nodes = 1;

	for (i = 0; i < height; i++)
		expected_nodes *= 2;
	expected_nodes -= 1;

	if (nodes == expected_nodes)
		return (1);

	return (0);
}
