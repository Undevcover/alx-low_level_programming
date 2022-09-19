#include "main.h"
/**
 * print_rev - funtion that prints the reverse of a string
 * @s: string that prints in reverse
 */
void print_rev(char *s)
{
	int i;
	char letter;

	for (i = 0; s[i] != '\0'; i++);
	for (i = i -1; i >= 0; i--)
	{
		letter = s[i];
		_putchar (letter);
	}
	_putchar('\n');
}
