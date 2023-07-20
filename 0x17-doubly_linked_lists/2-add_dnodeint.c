#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @n: Value to be stored
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
