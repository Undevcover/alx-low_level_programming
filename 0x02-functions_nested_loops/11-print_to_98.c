#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from a given nunber to 98
 * @n: starting point
 * Return: Void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
	}
	else
		printf("%i", n);

	printf("\n");
}
