#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (i == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
