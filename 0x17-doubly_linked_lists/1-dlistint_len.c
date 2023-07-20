#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list (list_t)
 * @h: A pointer to the head node
 * Return: The number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
