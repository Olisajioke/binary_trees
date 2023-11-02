#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t l = 0, r = 0;

l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((l > r) ? l : r);
}
return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, nodes, expected_nodes;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);

nodes = binary_tree_size(tree);
expected_nodes = (1 << (height + 1)) - 1;

return (nodes == expected_nodes);
}
