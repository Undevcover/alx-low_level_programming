#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @src: The string to copy
 * @dest: The string to copy to
 * @n: The number of bytes to copy from src
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
