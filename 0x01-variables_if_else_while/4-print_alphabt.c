#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 * This is the main function, which is the entry point of the program.
 * It returns an integer value to indicate the success or failure of the program.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++) {
if (c != 'q' && c != 'e') {
putchar(c);
}
}
putchar('\n');
return 0;
}
