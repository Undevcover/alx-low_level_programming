#include "main.h"
/**
 * _abs -function that returns an absolute value of an integer
 * @n: integer in question
 * Return: absolute value, an int
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
