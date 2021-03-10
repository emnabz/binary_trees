#include "binary_trees.h"
/**
* binary_tree_is_root - checks if a node is a leaf
* @node: a pointer to the root of binary tree
*
* Return: node
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (!node || node->parent)
return (0);
return (1);
}
