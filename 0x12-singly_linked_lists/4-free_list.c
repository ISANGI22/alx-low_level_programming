#include "lists.h"

/**
 * free_list - Function that frees a list list_t
 *
 * @head: the head of the list
 *
 * Return: null pointer
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
