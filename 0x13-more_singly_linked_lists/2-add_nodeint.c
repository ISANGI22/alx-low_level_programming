#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t
 *
 * @head: pointer to pointer, beginning of the list
 * @n: parameter to be used in the function
 *
 * Return: Address of the new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
