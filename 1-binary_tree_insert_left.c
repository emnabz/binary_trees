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
if (!parent)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (!node)
return (NULL);
node->left = parent->left;
if (parent->left)
parent->left->parent = node;
node->parent = parent;
node->left = node;
node->right = NULL;
node->n = value;
return (node);

}
