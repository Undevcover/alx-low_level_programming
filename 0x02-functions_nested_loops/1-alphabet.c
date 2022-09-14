#include "main.h"

/**
 * print_alphabet -prints all lowercase alphabets
 */
void print_alphabet(void) /* returns void */
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar ('\n');
}
