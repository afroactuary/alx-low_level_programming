#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine if num is greater than 5, is 0 or is less than 6 and not 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}