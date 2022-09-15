#include "main.h"
/**
 * print_numbers -funtion that prints 0 - 9 followed by a new line
 * Return: always void
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
	return(0);
}
