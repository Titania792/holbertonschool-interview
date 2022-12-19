#include "binary_trees.h"

/**
 * heap_insert - function that inserts a value into a Max Binary Heap.
 * @root: is a double pointer to the root node of the Heap.
 * @value: is the value to store in the node to be insterted.
 *
 * Return: a pointer to the inserted node, or NULL on failure.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	binary_tree_t *new_node;

	if (*root == NULL)
	{
		new_node = binary_tree_node(NULL, value);
		*root = new_node;
		return (new_node);
	}
	return (NULL);
}
