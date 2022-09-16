#include "main.h"
/*
 * more_numbers - function thatb prints 10*
 * the numbers from 0-14
 * Return: zero
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <15; i++)
	{
		j= i*10;
		_putchar(j + '0');
	}
	 _putchar('\n')
}
