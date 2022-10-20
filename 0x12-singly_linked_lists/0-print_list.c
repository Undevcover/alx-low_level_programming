#include "lists.h"
/**
 * print_list - This function prints all the elements of the list_t
 * @h: The list to be printed
 * Return: The number of nodespresent
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++i;
	}
	return (i);
}
