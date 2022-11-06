#include "main.h"
/**
 * print_sign - function that prints sign of a number
 * @n: the number
 * Return: 1 if number is positive, 0 if it's zero
 * and -1 if it's a negative number
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

