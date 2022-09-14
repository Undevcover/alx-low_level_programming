#include "main.h"
/**
 * my_function - This is a description
 */

int _islower(int c) 
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			_putchar(1);
		}
	}	
	_putchar(0);
}
