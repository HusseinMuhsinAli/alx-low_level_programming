#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
if (i != j)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
