#include "binary_trees.h"

/**
 * binary_tree_is_leaft - check if a npde is left
 * 
 * @node: pointer the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node->left && !node->right)
        return (1);
    return  (0);
}
