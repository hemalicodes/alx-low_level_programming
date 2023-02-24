#include "main.h"
#include <stdio.h>

/**
 * print_number - function to print integers
 * @n : integer value
 * Return: Always 0.
 */
void print_number(int n)
{
unsigned int a, b, count, tmp, pow;
a = n;
pow = b = 1;
if (n < 0)
{
a = a * -1;
putchar('-');
}
tmp = a;
while (tmp > 9)
{
b++;
tmp = tmp / 10;
}
for (count = 1; count < b; count++)
pow = pow * 10;
while (pow > 1)
{
putchar((a / pow) % 10 + '0');
pow = pow / 10;
}
putchar(a % 10 + '0');
}
