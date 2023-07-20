#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: double pointer to the list_t list
 * @n: Value to be stored
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	}
	return (new);
}
