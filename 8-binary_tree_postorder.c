#include "binary_trees.h"

/**
 * binary_tree_postorder - a post-order transversal through a binary tree func
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: do nothing if tree or func is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
