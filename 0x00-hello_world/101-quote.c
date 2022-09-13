#include <stdio.h>

/**
 * main - Explanation of my code 
 * Return: An integer
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
fwrite(str, sizeof(char), sizeof(str) - 1, stderr);
fflush(stdout);
return (1);
}
