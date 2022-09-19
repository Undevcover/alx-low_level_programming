#include "main.h"
#include <stdio.h>
/**
 * print_array- function that prints n elements of an array of integers
 * folloewd by a newlone
 * @a: elements
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
