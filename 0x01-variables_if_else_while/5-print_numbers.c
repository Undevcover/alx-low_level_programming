/*  C program to ptint all single digit numbers of base 10 starting from 0 */
#include <stdio.h>

/**
 * main -Main function entry point
 * Return: Always zero
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
