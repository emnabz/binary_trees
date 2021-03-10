#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts node at the left of a node
* @parent: parent of the node to create
* @value: value to store in new node
*
* Return: a pointer the new created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
if (parent->left != NULL)
{
parent->left = parent->left;
node->left = parent->left;
parent->left->parent = node;
}
parent->left = node;
node->parent = parent;
node->n = value;
return (node);
}
