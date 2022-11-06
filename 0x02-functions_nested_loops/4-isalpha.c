#include "main.h"
/**
 * _isalpha - Function that checks for lowercase or uppercase character
 * @c: character to check
 * Return: 0 if absent and 1 if present
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
