#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: String in question
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char myleet[] = "oOlL22eEaA5566tT";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 16; j++)
			if (s[i] == myleet[j])
				s[i] = j / 2 + '0';
	}
	return (s);
}
