#include "main.h"
/**
 * factorial - function that returns a factorial
 * @n: number whose factorial is being retuned
 * Return: factorial of n
 */

int factorial (int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (factorial(n) * factorial(n - 1);
	}
}
