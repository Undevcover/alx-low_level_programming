#include "main.h"
#include <stdio.h>
/**
 * _strchr -function that locates a character in a string
 * @s: string in question
 * @c: character to be found
 * Return: 0 if not found and address if found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (0);
}
