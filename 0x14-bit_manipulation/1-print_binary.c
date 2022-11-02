#include "main.h"
#include <stdio.h>

/**
 * print_binary -function that prints the an int to base 2
 * @n: The binary number to be converted
 */

void print_binary(unsigned long int n)
{
	while (n > 0)
        {
                n = n/2;
               _putchar( n&1);
        }
}
