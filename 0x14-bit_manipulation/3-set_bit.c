#include "main.h"

/**
 * set_bit - Fuction that sets the value of a bit to 1 at a given index
 * @n: The pointer to the bit value
 * @index: The index of n to change value
 * Return: -1 if fail, 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n  = *n | 1 << index;

	return (1);
}

