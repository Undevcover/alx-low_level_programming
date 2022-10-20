#include "lists.h"

/**
 * _strlent - Function that returns the length of a string
 * @s: String being evaluated
 *
 * Return: Length of string
 */
int _strlent(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}

/**
 * add_node_end - Function that adds a node at the end of a list
 * @head: Pointer to address of the list
 * @str: Pointer to string
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlent(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
