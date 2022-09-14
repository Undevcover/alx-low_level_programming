#include "main.h"
/**
 * print_alphabet_x10 - This is a description
 */

void print_alphabet_x10(void)
{
	int letter;
	int times;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (times = 0; times <= 10; times ++)
		{
			_putchar(letter);
		}
	}
        _putchar ('\n');
        
}    
