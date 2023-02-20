#include <stdio.h>
/**
 *  main  - Entry point
 *
 * Description: The program prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: 0 Always
 */

int main(void)
{
  int i;
  int j;

for (i = 'A'; i <= 'Z'; i++)
{
  putchar(i);
}

for (j = 'a'; j <= 'z'; j++)
{
  putchar(j);
}
putchar('\n');
return (0);
}
      
