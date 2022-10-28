#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t
 *
 * @head: point of the function to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
