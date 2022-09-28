#include "main.h"
/**
 **_sqrt_recursion - function that returns the value of x raised to the power of y
 *@x: the number to be powered
 *@y: the superscript, the power, tha guy 
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y-1);
}
