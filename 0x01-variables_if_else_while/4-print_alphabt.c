#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the lowercase alphabet on a single line, excluding the
 * letters 'e' and 'q'
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
