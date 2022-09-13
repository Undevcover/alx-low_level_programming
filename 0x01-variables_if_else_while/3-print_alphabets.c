/*C program to print all upper case and lower case alphabets.*/
 
#include <stdio.h>

/**
 * main -Main function entry point
 * Return: Always zero
 */
 
int main(void) /* Returns void */
{
	char i;
	
	for (i='a'; i<='z'; i++)
		putchar("%c ",i);
	
	for (i='A'; i<='Z'; i++)
		putchar("%c ",i);
       return 0;
}
