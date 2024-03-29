#include "lists.h"

/**
 * add_node_end - Functions that adds a new node at the enf of a list_t
 *
 * @head: First element of the list or parameter to be used in the function
 * @str: parameter to be used in the function
 *
 * Return: the address of the nwe elements or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	d = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = d;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
