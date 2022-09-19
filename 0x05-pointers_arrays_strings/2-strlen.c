#include "main.h"
/**
 * _strlen- function that prints the length of a string
 * @s: string that needs length print
 */
int _strlen(char *s)
{
	int i;
	int count = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
	count += 1;
	}
	return (count-1)
}
