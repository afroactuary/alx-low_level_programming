#include <stdio.h>

/**
 * main - Prints the numbers from 0-9.
 *
 * Return: Always (Success)
*/
int main(void)
{
	char n;

	for (n = '0'; n < 10; n++)
	{
		printf("%d", n);
		putchar(n);
	}
	putchar('\n');
	return (0);
}
