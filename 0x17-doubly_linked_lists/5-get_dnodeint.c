#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth
 * @head: Pointer to the head of the list
 * @index: Index of the node 0
 * Return: Pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
