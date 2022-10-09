#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: String to evaluate
 * Return: The string converted
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ' ';

	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		     || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		     || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] = s[i] - ' ';
		}
	}
	return (s);
}
