#include "main.h"
/**
 * print_numbers -funtion that prints 0 - 9 followed by a new line
 * except 2 and 4
 * Return: always void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2)||(i == 4))
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
