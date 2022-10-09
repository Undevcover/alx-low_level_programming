#include "main.h"
/**
 * *string_toupper - function that changes all lowercase characters
 * of a string to uppercase
 * @s: The string in question
 * Return: The string in uppercase
 */

char *string_toupper(char *s)
{
	int i, pos;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			pos = 26 - ('z' - s[i]);
			s[i] = pos + 64;
		}
	}

	/* return converted string */
	return (s);

}
