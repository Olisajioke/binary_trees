#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree.
 * @tree: A pointer to the root node of the tree to count nodes.
 *
 * Return: The number of nodes with at least one child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 0;
	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
