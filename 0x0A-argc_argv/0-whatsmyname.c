#include <stdio.h>

/**
 * main - print the name of the file followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
