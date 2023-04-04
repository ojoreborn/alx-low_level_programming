#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = create_node(n);
	if (!new_node)
	return (NULL);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * create_node - creates a new node and initializes its members
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node
 */
listint_t *create_node(const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
