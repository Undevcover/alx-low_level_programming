#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: Pointer to a struct
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
