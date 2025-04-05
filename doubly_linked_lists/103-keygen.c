#include <stdio.h>
#include <string.h>

/**
 * main - Generates a key for the crackme5 program based on username.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *username;
	unsigned int sum = 0;
	int i;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	username = argv[1];

	for (i = 0; username[i]; i++)
		sum += username[i];

	/* Ejemplo: clave derivada de suma + operaciones */
	printf("%u\n", (sum ^ 0x55aa) + 0x1234);

	return (0);
}

