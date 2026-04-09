#include "binary_trees.h"

/**
 * binary_tree_nodes - Compte les nœuds avec au moins 1 enfant
 * @tree: Pointeur vers la racine de l'arbre
 *
 * Return: Nombre de nœuds non-feuilles, ou 0 si tree est NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Si le nœud a au moins un enfant (gauche OU droite) */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* On compte 1 pour ce nœud + le résultat des enfants */
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	/* Si c'est une feuille, on ne compte pas le nœud lui-même (0) */
	return (0);
}
