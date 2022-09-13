/* Program to print all alphabets in lower case */


#include <stdio.h>

/**
 * main - entry point
 * Return: zero
 */
int main(void) /* returns void */
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
		putchar(', ');
	putchar('\n');
	return (0);
}
