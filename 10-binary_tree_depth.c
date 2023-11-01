#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @new_tree: A pointer to the node to measure the depth.
 *
 * Return: If new_tree is NULL, function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *new_tree)
{
return ((new_tree && new_tree->parent) ? 1 +
		binary_tree_depth(new_tree->parent) : 0);
}
