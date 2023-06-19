#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @src: The source string
 * @dest: The destination string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	/* take the length of string dest */
	for (length = 0; dest[length] != 0; length++)
		;

	/* append src string to end of dest string */
	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length++;
	}

	return (dest);
}
