#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all data (n) of a listint_t
 *
 * @head: pointer to the head of the function
 *
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	int som = 0;

	if (!head)
		return (0);
	while (head)
	{
		som = som + head->n;
		head = head->next;
	}
	return (som);
}
