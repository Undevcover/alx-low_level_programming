#include "main.h"
#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
 * main - tha main function
 * @argc: argument count
 * @argv: array of argument strings
 * Return: zero
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
