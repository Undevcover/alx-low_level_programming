#include <stdio.h>
#include "main.h"
/**
 * main - entry point of program
 * Returm - 0
 */

int main()
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d", j);
	_putchar('\n')
	return 0;
}
