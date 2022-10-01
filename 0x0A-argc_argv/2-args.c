#include <stdio.h>
/**
 * main - main function body
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always zero when successful
 */
int main(int argc, char *argv[])
(
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
