#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
