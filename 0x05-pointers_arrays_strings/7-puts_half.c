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
		count = (count + i) / 2;
	for (; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
