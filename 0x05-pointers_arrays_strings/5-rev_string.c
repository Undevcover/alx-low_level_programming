#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char letter;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; j < i; i--)
	{
		letter = s[i];
		s[i] = s[j];
		s[j] = letter;
		j++;
	}
}
