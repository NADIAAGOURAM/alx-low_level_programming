#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer.
 * @idx:index of the node, starting at 0
 * @n:integer
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *newnode;

	temp = *head;
	if (temp == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx != 0)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			newnode->next = temp->next;
			temp->next = newnode;
		}
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
