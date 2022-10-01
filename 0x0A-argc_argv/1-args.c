#include <stdio.h>
#define UNUSED(argv) (void)(argv)
/**
 * main - main function body
 * @argv: arguement vector
 * @argc: arguement count
 * Return: zero if successful
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
