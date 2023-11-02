#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);
return (left_height > right_height ? left_height + 1 : right_height + 1);
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
size_t height, level = 0;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);

return (is_perfect_recursive(tree, height, level));
}

/**
 * is_perfect_recursive - Helper function to check if a binary tree is perfect
 * @tree: A pointer to the current node.
 * @h: The height of the entire tree.
 * @level: The current level being checked.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t h, size_t level)
{
if (tree == NULL)
return (1);

if (tree->left == NULL && tree->right == NULL)
return (level == h - 1);

if (tree->left == NULL || tree->right == NULL)
return (0);

return (is_perfect_recursive(tree->left, h, level + 1) &&
is_perfect_recursive(tree->right, h, level + 1));
}
