#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given
 * position
 *
 * @head: the head of list
 * @idx: index of the list where the node should be added
 * @n: parameter to be used in the function
 *
 * Return: Address of the new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node = *head, *new_node_ptr;

	if (idx == 0)
	{
		new_node_ptr = malloc(sizeof(listint_t));
		if (new_node_ptr == NULL)
			return (NULL);
		new_node_ptr->n = n;
		new_node_ptr->next = *head;
		*head = new_node_ptr;
		return (new_node_ptr);
	}
	while (current_node && ((i + 1) != idx))
	{
		current_node = current_node->next;
		i++;
	}
	if ((i + 1) == idx)
	{
		new_node_ptr = malloc(sizeof(listint_t));
		if (!new_node_ptr)
			return (NULL);
		new_node_ptr->n = n;
		new_node_ptr->next = current_node->next;
		current_node->next = new_node_ptr;
		return (new_node_ptr);
	}
	return (NULL);
}
