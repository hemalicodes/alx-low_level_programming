#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0 Always
 */

int main(void)
{
int x,y;
for (x = 0; x <= 98; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar(x + '0');
putchar(y + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
