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
char combi[3];
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
combi[0] = i + '0';
combi[0] = j + '0';
combi[3] = '\0';
putchar("%s\n", combi);
}
}
return (0);
}
