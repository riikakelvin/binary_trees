#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: - a pointer to the node to insert the left-child
 * @value: - the value to store in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = parent->left;
	newNode->right = NULL;
	if (parent->left)
		parent->left->parent = newNode;
	parent->left = newNode;
	return (newNode)
}
