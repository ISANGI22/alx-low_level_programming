#include "lists.h"

/**
 * add_node - Functoins that adds new node at the beginning of a list_t
 *
 * @head: Header to the linked list
 * @str: string (malloc' ed) of the list
 *
 * Return: New node pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	d = strdup(str);
	if (d == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = d;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
