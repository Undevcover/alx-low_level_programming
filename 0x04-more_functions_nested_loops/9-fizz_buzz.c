#include <stdio.h>
/**
 * main - entry point
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
