#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node, or NULL if:
 * - node is NULL
 * - parent is NULL
 * - node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Si le nœud actuel est l'enfant de GAUCHE, le frère est à DROITE */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Sinon (si le nœud est à droite), le frère est à GAUCHE */
	return (node->parent->left);
}
