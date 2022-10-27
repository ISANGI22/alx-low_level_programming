#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 *
 * @h: parameter to be used in the function
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
