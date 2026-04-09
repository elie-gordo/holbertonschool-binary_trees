#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	/* On calcule la hauteur seulement si l'enfant existe */
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	/* On retourne la plus grande des deux hauteurs */
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}