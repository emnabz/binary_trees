#include "binary_trees.h"

/**
* binary_tree_depth - depth of the tree
*@tree: the node to check
*Return: the depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL)
		return (0);
	for (i = 0; tree->parent != NULL; i++)
		tree = tree->parent;
	return (i);
}
