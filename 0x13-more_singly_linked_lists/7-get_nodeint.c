#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: The pointer to listint_t list
 * @index: The index of the node, starting at 0
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (i == index)
			return (current);

		i++;
		current = current->next;
	}

	return (current);
}
