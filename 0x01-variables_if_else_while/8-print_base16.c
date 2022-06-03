#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */
int main(void)
{
	char c;

	for (c = 'a'; c<= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
