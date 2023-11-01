#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Return: 0 if tree is Null and count of leaves if not
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_of_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		count_of_leaves += binary_tree_leaves(tree->left);
		count_of_leaves += binary_tree_leaves(tree->right);
		return (count_of_leaves);
	}
}
