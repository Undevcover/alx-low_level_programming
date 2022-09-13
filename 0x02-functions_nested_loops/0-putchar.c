#include <stdio.h>
#include "main.h"

/**
 * main - function entry point
 * return: returns zero
 */
int main(void)
{
	char myarr[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(myarr[i]);
	}
	putchar('\n');

	return (0);
}
