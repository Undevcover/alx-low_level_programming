#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: The bit passed to the function
 * @index: The index to find
 * Return: The value of a bit at that given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val = n >> index;

	if (index >= (sizeof(n) * 8))
		return (-1);

	return (val & 1);
}
