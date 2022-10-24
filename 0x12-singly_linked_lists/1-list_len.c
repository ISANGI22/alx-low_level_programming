#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list_t
 *
 * @h: parameter to be used in the function
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elmts = 0;

	while (h)
	{
		elmts++;
		h = h->next;
	}
	return (elmts);
}
