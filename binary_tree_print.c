#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/* Forward declaration */
static void _binary_tree_print_recursive(const binary_tree_t *tree, char *prefix,
		int is_left);

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	_binary_tree_print_recursive(tree, "", 0);
}

/**
 * _binary_tree_print_recursive - Prints a binary tree recursively
 * @tree: Pointer to the current node
 * @prefix: The prefix string for the current branch
 * @is_left: Flag to indicate if this is a left child
 */
static void _binary_tree_print_recursive(const binary_tree_t *tree,
		char *prefix, int is_left)
{
	char new_prefix[256];

	if (tree == NULL)
		return;

	printf("%s", prefix);
	if (is_left == -1)
		printf("(");
	else
	{
		if (is_left)
			printf(".--");
		else
			printf("`--");
	}

	printf("(%03d)", tree->n);

	if (is_left == -1)
		printf(")\n");
	else
	{
		if (tree->left || tree->right)
		{
			printf("-");
			if (tree->right)
				printf("-.");
			printf("\n");
		}
		else
			printf("\n");
	}

	if (tree->left || tree->right)
	{
		strcpy(new_prefix, prefix);
		if (is_left != -1)
		{
			if (is_left)
				strcat(new_prefix, "|  ");
			else
				strcat(new_prefix, "   ");
		}

		if (tree->left)
			_binary_tree_print_recursive(tree->left, new_prefix, 1);
		else if (tree->right)
		{
			strcpy(new_prefix, prefix);
			if (is_left != -1)
			{
				if (is_left)
					strcat(new_prefix, "|  ");
				else
					strcat(new_prefix, "   ");
			}
		}

		if (tree->right)
			_binary_tree_print_recursive(tree->right, new_prefix, 0);
	}
}
