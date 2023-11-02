#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *
 *Return: the uncle of node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
