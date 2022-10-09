#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings
 * @src: The source string
 * @dest: The concatenated string
 * @n: The number of bytes to append
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	/* get the length of dest string */
	for (length = 0; dest[length] != 0; length++)
		;

	/* append src to dest one character at a time */
	for (i = 0; i < n; i++)
	{
		dest[length] = src[i];
		length++;
	}

	/* return concatenated string */
	return (dest);
}
