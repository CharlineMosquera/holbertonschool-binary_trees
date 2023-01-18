#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf
 *
 * @node: pointer the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node && !node->left && !node->right)
		return (1);
	else
		return  (0);
}
