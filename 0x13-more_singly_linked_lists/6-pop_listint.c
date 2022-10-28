#include "lists.h"

/**
 * pop_listint - Function that deletes the head of node of a listint_t
 *
 * @head: the head of the list
 *
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rem;

	if (!*head)
		return (0);
	temp = *head;
	rem = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (rem);
}
