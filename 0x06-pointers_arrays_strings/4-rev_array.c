#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of
 * integers
 * @a: The array of integers 
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, con;

	/* loop through array reversing elements */
	for (i = 0; i < n; i++)
	{
		n--;
		con = a[i];
		a[i] = a[n];
		a[n] = con;
	}

}
