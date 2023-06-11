#include "main.h"
/**
 * _isdigit - Checks if c is a single digit betwen 1 and 9
 *@c: digit in question
 *Return: 1 if c is a digit and 0 therwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
