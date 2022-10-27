#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t
 *
 * @h: parameter to be used in the function
 *
 * Return: the elements of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
