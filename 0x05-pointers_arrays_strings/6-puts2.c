#include "main.h"
/**
 * puts2 - a function that prints every other character
 * of a string starting with the forst character
 * folloewd by a new line
 * @str: string in question
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
