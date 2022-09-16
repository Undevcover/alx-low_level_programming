#include "main.h"
/**
 *_isupper -  Checks if alphabet is in uppercase
 * @c: character to check
 * return 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A')&&(c <= 'Z'))

		_putchar(1);
	else
		_putchar(0);
}
