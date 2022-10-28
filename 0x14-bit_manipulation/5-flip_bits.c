#include "main.h"

/**
 * flip_bits - Function that returns the number of bts would need
 *  to flip to get one number to another
 *  @n: bit to flip
 *  @m: bit to flip to
 *  Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
