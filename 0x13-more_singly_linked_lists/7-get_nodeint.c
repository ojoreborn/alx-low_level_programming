#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node or NULL if none.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nds = head;

	for (unsigned int i = 0; nds != NULL && i < index; i++)
	{
		nds = nds->next;
	}
	if (nds == NULL)
	{
		return (NULL);
	}
	return (nds);
}
