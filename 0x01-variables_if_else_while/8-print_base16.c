/*  C program to print all single digit of hex*/
#include <stdio.h>

/**
 * main -Main function entry point
 * Return: zero
 */
int main(void) /* The function returns void */
{
	int num_arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 97, 98, 99, 100, 101, 102};
	int num = 0;

	for (num = 0; num < 16; num++)
	{
		if (num > 9)
		{
			putchar(num_arr[num]);
		}
		else
		{
			putchar(num_arr[num] + '0');
		}
	}
	putchar('\n');
	return (0);
}
