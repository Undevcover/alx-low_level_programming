#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: string in question
 */

void puts_half(char *str)
{
	int i;
	int count;

	for (i = 0; str[i] != '\0'; i++)
		count = (i + 1) / 2;
	for (; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
