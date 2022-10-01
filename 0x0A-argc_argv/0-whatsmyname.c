#include <stdio.h>
#define UNUSED(argc) (void)(argc)
/**
 *Main - tha main function
 *@argc: argument count
 *@argv: array of argument strings
 *Return - always zero
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
