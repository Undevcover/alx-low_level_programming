#include "main.h"
/**
 * print_last_digit -function that prints the last digit
 * of a number
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n);
		return (n);
	}
	else 
	{
		n = n % 10;
		_putchar(n);
		return (n);
	}
}
