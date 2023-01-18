#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds the sibling of a node
 * @node: variable struct
 * Return: struct
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
		return (NULL);

	if (node->parent && node->parent->left != node)
	{
		sibling = node->parent->left;
		return (sibling);
	}
	else if (node->parent && node->parent->right != node)
	{
		sibling = node->parent->right;
		return (sibling);
	}
	return (NULL);
}
