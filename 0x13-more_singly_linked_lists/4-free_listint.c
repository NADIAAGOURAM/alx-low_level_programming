#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head)
	{
		newnode = head->next;
		free(head);
		head = newnode;
	}
}
