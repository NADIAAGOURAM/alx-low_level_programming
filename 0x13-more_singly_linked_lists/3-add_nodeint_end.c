#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n:integer
 * Return: he address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tailnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tailnode = *head;
	while (tailnode->next != NULL)
		tailnode = tailnode->next;
	tailnode->next = newnode;
	return (newnode);
}
