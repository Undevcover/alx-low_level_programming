#include "main.h"
/**
 * print_alphabet_x10 - This is a description
 */

void print_alphabet_x10(void)
{
	int times, letter;

	for (times = 0; times < 10; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
