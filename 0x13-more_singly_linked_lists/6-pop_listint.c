#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that  deletes the head node of a listint_t linked
 * list, and returns the head node's data
 * @head: A pointer to the listint_t list
 * Return: The head nose's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;

	*head = (*head)->next;
	n = tmp->n;

	free(tmp);

	return (n);
}
