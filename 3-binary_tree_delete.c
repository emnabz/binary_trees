#include "binary_trees.h"
/**
* binary_tree_delete - deletes an entire binary tree
* @tree: a pointer to the root of binary tree
*
* return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
binary_tree_print(tree->left);
binary_tree_print(tree->right);
free(tree);
tree = NULL;
}
