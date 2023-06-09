#include "lists.h"

/**
 * print_listint - prints the list of elements
 * @h: linked list
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	x++;
	printf("%d\n", h->n);
	return (x);
}
