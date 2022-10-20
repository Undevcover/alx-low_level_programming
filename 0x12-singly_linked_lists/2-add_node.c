#include "lists.h"

/**
 * _strlent - Function that returns the length of a string
 * @s: String in questtion
 * Return: Length of the string
 */
int _strlent(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}
/**
 * add_node - functionn that adds a new node at the beginning of a list
 * @head: Pointer to address of the list
 * @str: Pointer to a string
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlent(str);
	new->next = *head;
	*head = new;
	return (*head);
}
