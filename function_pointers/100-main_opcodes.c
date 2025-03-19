#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *ptr;

	/* Check if we have exactly 2 arguments (program name + number) */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	/* Validate that the number of bytes is not negative */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main; /* pointer to main's starting address */

	/* Loop and print each byte in lowercase hexadecimal */
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

