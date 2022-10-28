#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list listint
 *
 * @head: the header of the linked list
 * @index: index of the node, starting from 0
 *
 * Return: NULL in case of failure or the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nod;

	for (nod = 0; nod < index; nod++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
