#include <stdio.h>

/**
 * main - prints the program name, followed by the new line
 * @argc: the number of arguements supplied to the program
 * @argv: an array of pointers to the arguments.
 * Return: always 0
 */

int main(int _attribuite_((_unused_)) argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
