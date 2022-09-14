/* C function to print all lowercase alphabets */
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar ('\n');
}
