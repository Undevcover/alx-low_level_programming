#include "main.h"
/**
 *_isupper -  Checks if alphabet is in uppercase
 * @c: character to check
 * return 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A')&&(c <= 'Z'))

		return(1);
	else
		return(0);
}
