#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @new_tree:	A pointer to the root node of the tree to measure the height.
 *
 * Return: If new_tree is NULL, function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *new_tree)
{
if (new_tree)
{
	size_t x = 0, y = 0;

	x = new_tree->left ? 1 + binary_tree_height(new_tree->left) : 0;
	y = new_tree->right ? 1 + binary_tree_height(new_tree->right) : 0;
	return ((x > y) ? x : y);
}
return (0);
}
