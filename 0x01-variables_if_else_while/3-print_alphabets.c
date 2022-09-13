/* C program to print all upper case and lower case alphabets */
#include <stdio.h>
/**
 * main -Main function entry point
 * Return: Always zero
 */

int main(void) /* Returns void */
{
	char uppercase = 'a';
	char lowercase = 'A';
	
	for (uppercase = 'a'; uppercase <= 'z'; uppercase++)
		putchar(uppercase);
	for (lowercase = 'A'; lowercase <= 'Z'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
