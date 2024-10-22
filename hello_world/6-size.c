#include <stdio.h>
/**
 * main - Print the size of various types.
 *
 * Return: Return 0 when done.
 */

int main(void)
{
	int intType;
		float floatType;
		char charType;
		long longType;
		long long intTypeLong;

		printf("size of a char: %zu byte(s)\n", sizeof(charType));
		printf("size of an char: %zu byte(s)\n", sizeof(intType));
		printf("size of a long int: %zu byte(s)\n", sizeof(longType));
		printf("size of a long long int: %zu byte(s)\n", sizeof(intTypeLong));
		printf("size of a float: %zu byte(s)\n", sizeof(floatType));
		return (0);
}
