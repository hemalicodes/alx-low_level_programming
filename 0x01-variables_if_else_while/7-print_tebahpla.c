#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0 Always
 */

int main(void)
{
char i;
for (i = 'z'; i <= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return(0);
}
