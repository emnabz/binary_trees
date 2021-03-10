#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts node at the right of a node
* @parent: parent of the node to create
* @value: value to store in new node
*
* Return: a pointer the new created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
return (NULL);
node = binary_tree_node(parent, value);
if (node == NULL)
return (NULL);
node->right = parent->right;
if (node->right != NULL)
node->right->parent = node;
parent->right = node;
return (node);
}
