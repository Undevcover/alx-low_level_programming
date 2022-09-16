#include "main.h"
 /**
  * print_line- function that prints a line in the terminal
  * @n: number of lines
  * Return: printed 
  */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n')
		}
		_putchar('_');
	}
}
