#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Uses post-order traversal to free all nodes in the tree.
 * If tree is NULL, do nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* 1. Supprimer récursivement le sous-arbre gauche */
	binary_tree_delete(tree->left);

	/* 2. Supprimer récursivement le sous-arbre droit */
	binary_tree_delete(tree->right);

	/* 3. Libérer le nœud actuel */
	free(tree);
}
