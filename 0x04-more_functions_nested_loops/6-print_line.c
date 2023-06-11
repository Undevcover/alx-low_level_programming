#include "main.h"
 /**
  * print_line - function that prints a line in the terminal
  * @n: number of lines
  * Return: printed line
  */
void print_line(int n)
{
	int i;
	char space = '_';

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(space);
	}
	  _putchar('\n');
}
