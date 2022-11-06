#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * from 00:00 - 23:59
 * return: void
 */
void jack_bauer(void)
{
	int hr, mins, i, j;

	for (i = 0; i <= 24; i++)
		hr = i;
	for (j = 0; j < 60; j++)
		mins = j;
	_putchar('0' + hr);
	_putchar(':');
	_putchar('0' + mina);
}
