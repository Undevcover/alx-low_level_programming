#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that convert a binary number to an unsigned integer
 * @b: String representing a binary number
 * Return: The converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	short blen;
	short i;
	short j;
	unsigned int sum;
	int pow;
	short base;

	base = 2;
	sum = 0;
	pow = 1;
	if (b == NULL)
		return (0);
	/* find the length of b */
	for (blen = 0; b[blen] != '\0'; blen++)
		;
	if b(len == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
			pow = pow * base;
		sum = sum + (pow * (b[i] - 48)); 
		len--;
		pow = 1;
	}
	return (sum);
}
}
