#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert
 * Return: he address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = size;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;
	return (new);
}
