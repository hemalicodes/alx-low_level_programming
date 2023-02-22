#include<stdio.h>
#includes "main.h"
/**
 * print_sign - prints the sign of a numbe
 * @c: single letter input
 * Return: 1 and prints + if n is greater than 0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(+);
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('0');
return (0);
}
