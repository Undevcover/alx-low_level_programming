#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: character tomcheck
 * Return: 0 if absent and 1 if present
 */

int _islower(int c)
{

		if (c >= 97 && c <= 122)
			return (1);
		else
			return (0);
}
