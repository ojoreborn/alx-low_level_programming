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
	unsigned int real_index = 0;
	listint_t *real_node = head;

	while (real_index && real_node < index)
	{
		real_node = real_node->next;
		real_index++;
	}
	if (real_node)
	{
		return (real_node);
	}
	else
	{
		return (NULL);
	}
}
