#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insère un nœud comme enfant gauche d'un autre nœud
 * @parent: Pointeur vers le nœud où insérer l'enfant gauche
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Un pointeur vers le nouveau nœud, ou NULL en cas d'échec
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Création du nouveau nœud via la fonction de base */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* Si le parent possède déjà un enfant gauche */
	if (parent->left != NULL)
	{
		/* L'ancien enfant gauche devient l'enfant du nouveau nœud */
		new_node->left = parent->left;
		/* On met à jour le lien de parenté de l'ancien enfant */
		new_node->left->parent = new_node;
	}

	/* Le nouveau nœud devient officiellement l'enfant gauche du parent */
	parent->left = new_node;

	return (new_node);
}