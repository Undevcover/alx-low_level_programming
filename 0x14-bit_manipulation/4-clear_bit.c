#include "main.h"

/**
 * clear_bit - Function that sets the value of bit to zero at a given index
 * @n: pointer to the bit valeu
 * @index: index to set n to zero
 * Return: -1 for fail, 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(n) * 8))
		return (-1);


	*n = *n & ~(1 << index);

	return (1);
}
