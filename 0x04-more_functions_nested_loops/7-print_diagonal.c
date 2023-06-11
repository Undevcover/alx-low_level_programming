#include "main.h"
/**
 * print_diagonal - prints a diagonal line in stdout
 * @n: diagonal frequency
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('$');
	}
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('$');
		_putchar('\n');
	}
	putchar('\n');
}
