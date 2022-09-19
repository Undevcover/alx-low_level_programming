#include "main.h"
/**
 * _strcpy - function that copies a string pointed to by src
 * including terminating null byte
 * @src: source string
 * @dest: destination string
 * Rturn: returns copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
