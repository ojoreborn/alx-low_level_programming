#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t amount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		amount++;
		h = h->next;
	}
	return (amount);
}
