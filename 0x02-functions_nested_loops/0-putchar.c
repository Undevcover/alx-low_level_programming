/*  C program to prints putchar */
#include "main.h"

/**
 * main -Main function entry point
 * Return: Always zero
 */
int main(void) /* The function returns void */
{
	char str[] = "_putchar";
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
	return (0);
}
