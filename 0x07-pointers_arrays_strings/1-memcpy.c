#include "main.h"

/**
 * *_memcpy - function that copies n bytes from memory area src
 * to memory area dest
 * @dest: end point
 * @src: starting point
 * @n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n) 
{
	int i;

	for (i = 0;i < n;i++)
		src[i] = dest[i];
	return (dest);
}
