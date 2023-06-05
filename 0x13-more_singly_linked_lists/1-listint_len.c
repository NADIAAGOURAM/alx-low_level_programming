#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: A pointer to the head node
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nb = 0;
	int i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
		nb++;
	}
	return (nb);
}
