#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: a pointer to the root of binary tree
*
* Return: node
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);
if (node->right || node->left)
{
return (0);
}
return (1);
}
