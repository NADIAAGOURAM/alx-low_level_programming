#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: double pointer.
 * @index:index of the node, starting at 0
 * Return: returns the nth node of a list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	       return (NULL);	
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
