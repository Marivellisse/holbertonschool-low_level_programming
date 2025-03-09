#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector (unused here)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* argv is unused, silence compiler warnings */

	printf("%d\n", argc - 1);

	return (0);
}

