/*  C program to ptint all single digit numbers using putchar */
#include <stdio.h>

/**
 * main -Main function entry point
 * Return: Always zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
