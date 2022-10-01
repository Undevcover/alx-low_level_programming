#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function body in c
 * @argc: argument count
 * @argv: argument vector
 * Return: zero when successful
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	
	if (argc == 1)
		printf("%d\n", 0);

	for (i = 0; i < argc; i++)
	{
		if (!atoi(argv[i])
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
