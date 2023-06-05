#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode, *temp;

	if (head == NULL)
                return;
	temp = *head;
	while (temp != NULL)
	{
		newnode = temp->next;
		free(temp);
		temp = newnode;
	}
	*head = NULL;
}
