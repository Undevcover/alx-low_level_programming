/*  C program to print all lowecase alphabets in reverse*/
#include <stdio.h>

/**
 * main -Main function entry point
 * Return: Always zero
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
