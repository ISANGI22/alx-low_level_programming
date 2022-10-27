#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t
 *
 * @head: pointer to pointer or the head of the list
 * @n: Data to be inserted to the new node created
 *
 * Return: The address of the new element otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nw;
	return (nw);
}
