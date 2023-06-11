#include <stdio.h>
/**
 * main- entry point
 * Return: always zero
 */

int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
