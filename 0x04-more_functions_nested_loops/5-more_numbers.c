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
		for (j = 0; j < 11; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	 _putchar('\n');
}
