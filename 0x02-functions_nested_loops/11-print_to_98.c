#include "main.h"
/**
 * print_to_98 - prints from a given nunber to 98
 * @n: starting point
 * Return: Void
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <99; i++)
	{
		if (i < 98)
		{
			printf("%d, ", i);
		}
		else 
		{
			printf("%d\n", i);
		}
	}
}
