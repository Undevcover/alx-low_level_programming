#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	// Thought process
	// 1. find the length of b;
	//loop through and power 2 through each loop
	//multiply each element of b with corresponding power of 2
	//add the result
	//return the final result
	unsigned int len;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int pow;
	short base;

	base = 2;
	sum = 0;
	pow = 1;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
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
