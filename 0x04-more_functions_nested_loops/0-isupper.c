#include <main.h>

/*
 * Checks if alphabet is in uppercase
 * Always returns void
 */
int _isupper(int c)
{
	if (( c > 65) || (c < 90))
	{
		_putchar(1);
	}
	_putchar(0);
}
