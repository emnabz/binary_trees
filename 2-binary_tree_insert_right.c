#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts node at the right of a node
* @parent: parent of the node to create
* @value: value to store in new node
*
* return: a pointer the new created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (!parent)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (!node)
return (NULL);
node->right = parent->right;
if (parent->right)
parent->right->right = node;
node->parent = parent;
node->right = node;
node->left = NULL;
node->n = value;

return (node);
}
