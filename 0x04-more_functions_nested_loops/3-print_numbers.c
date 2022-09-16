#include "main.h"
/**
 * print_numbers -funtion that prints 0 - 9 followed by a new line
 * Return: always void
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}
