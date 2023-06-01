#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list (list_t)
 * @h: A pointer to the head node
 * Return: The number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	int i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
