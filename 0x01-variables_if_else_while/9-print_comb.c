#include <stdio.h>
/**
* main -this program prints a series of numbers with commas
* Return: Always (Successful);
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
		putchar(',');
		putchar(' ');
																					}

	}
	putchar('\n');
	return (0);
}
