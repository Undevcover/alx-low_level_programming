#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -function that frees a list
 * @head: The listint_t list to free
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
