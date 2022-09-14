#include "main.h"
/**
 * my_function - This is a description
 */

int _islower(int c) 
{
	int letter;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == _islower(letter))
		{
			_putchar(1);
		}
	}
}
