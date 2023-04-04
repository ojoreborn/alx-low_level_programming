#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
