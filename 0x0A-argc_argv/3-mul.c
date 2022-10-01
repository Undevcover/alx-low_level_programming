#include <stdio.h>
/**
 * main - main function body
 * @argc: argument count
 * @argv: argument vector
 * Return: zero whn successful
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", mul);
        return (0);
}
