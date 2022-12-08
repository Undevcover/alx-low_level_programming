#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node
 * at a given position
 * @h: The head node of the linked list
 * @idx: The index where the new node should be
 * @n: The int element value of a node
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	if (!idx)
		return (add_dnodeint(h, n));

	if (!h)
		return (NULL);

	tmp = *h;
	while (tmp && idx > 1 && tmp->next)
	{
		tmp = tmp->next;
		idx--;
	}

	if (!tmp || idx > 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = tmp;
		new_node->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = new_node;
		tmp->next = new_node;
	}
	else
		return (NULL);

	return (new_node);
}
