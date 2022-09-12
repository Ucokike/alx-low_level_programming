#include <stdio.h>
/**
* main -This program Prints the alphabet in reverse order
* Return: Always (Success)
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
