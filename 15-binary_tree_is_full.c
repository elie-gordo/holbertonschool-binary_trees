#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* CAS 1 : Si c'est une feuille (0 enfant), c'est "plein" pour ce nœud */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* CAS 2 : Si le nœud a 2 enfants, on vérifie récursivement les deux côtés */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* CAS 3 : Si le nœud n'a qu'un seul enfant, l'arbre n'est PAS plein */
	return (0);
}
