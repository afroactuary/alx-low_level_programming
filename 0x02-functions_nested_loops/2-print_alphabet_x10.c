#include "main.h"

/**
 * peint_alphabet_x10 - prints 10 times the alphabet in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;

while (i++ <=9)
{
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}
}
