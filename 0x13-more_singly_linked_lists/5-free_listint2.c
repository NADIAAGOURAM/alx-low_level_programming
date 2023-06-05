#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode;

	while (*head != NULL)
	{
		newnode = (*head)->next;
		free(*head);
		*head = newnode;
	}
	if (head == NULL)
		return;
}
