#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers from 0-14
 * Return: zero
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			printf("%d", j);
		}
		_putchar('\n');
	}
}
