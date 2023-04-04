#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if empty
 */

int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);
	int num = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (num);
}
