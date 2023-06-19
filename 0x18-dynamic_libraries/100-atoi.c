#include "main.h"
/**
 * _atoi- function that converts a string to an integer
 * @s: string in question
 * Return: integer
 */
int _atoi(char *s)
{
	int i, num, neg;

	neg = 1;
	i = num = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			neg = neg * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
	}
	neg = neg * -1;
	return (num * neg);
}
