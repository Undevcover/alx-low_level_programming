#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if ((s1[i] - s2[i]) != 0)
			break;
	}

	return (s1[i] - s2[i]);
}
