#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints all possible different combinations of two digits.
 *
 * Return: 0 Always
 */

int main(void)
{
int i,j;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
putchar( i + '0');
putchar ( j + '0');  
putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
