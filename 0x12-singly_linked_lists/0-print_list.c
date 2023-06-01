#include "lists.h"

/**
 * print_list - prints all the elements of list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	int i = 0;

	for (; h != NULL; i++)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodes++;
	}
	return (nodes);
}
