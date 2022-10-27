#include "lists.h"

/**
 * free_listint - Function that frees a listint_t
 *
 * @head: pointer to the list to be freed
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
