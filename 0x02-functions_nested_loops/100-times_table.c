#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function that prints n times table, starting with 0
 * @n: the integer parameter
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;	
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%3d", i * j);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

