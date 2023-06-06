#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer.
 * @idx:index of the node, starting at 0
 * @n:integer
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, newnode;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (temp == NULL || newnode == NULL)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
		{
			temp = (*head)->next;
			temp->next = newnode;
			newnode->n = n;
		}
	}
	return (newnode);
}
