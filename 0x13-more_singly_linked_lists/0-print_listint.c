#include "lists.h"

/**
 * print_listint - prints all the elements of list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;
	int i = 0;

	for (; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
		nb++;
	}
	return (nb);
}
