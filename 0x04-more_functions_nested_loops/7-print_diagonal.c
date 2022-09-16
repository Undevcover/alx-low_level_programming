#include "main.h"
/**
  * print_line- function that prints a diagonal line in the terminal
  * @n: number of space 
  * Return: printed 
  */
void print_diagonal(int n)
{
	int i, j;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\\$');
			_putchar('\n');
		}

	}
	_putchar('\n');
}
