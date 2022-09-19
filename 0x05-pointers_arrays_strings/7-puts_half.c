#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: string in question
 */

void puts_half(char *str)
{
	int i;
       	int count = 1;

	for i = 0; str[i] != '\0'; i++)
		count = count + i;
	for (i = 0; i < count / 2; i++)
	{
		_putchar(str[i]);
	}
}
