#include <stdio.h>
/**
 *  main  - Entry point
 *
 * Description: prints the alphabet in lowercase and uppercase.
 *
 * Return: 0 Always
 */

int main(void)
{
int i;
int j;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
      
