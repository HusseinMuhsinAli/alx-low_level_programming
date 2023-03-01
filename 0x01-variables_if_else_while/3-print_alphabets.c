#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
char lower_case = 'a';
char upper_case = 'A';
int i;
for (i = 0; i < 26; i++)
{
putchar(lower_case);
lower_case++;
}
for (i = 0; i < 26; i++)
{
putchar(upper_case);
upper_case++;
}
putchar('\n');
return (0);
}
