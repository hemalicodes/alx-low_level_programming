#include <limits.h>
#include "main.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = print_sign(98);
if (r < 0)
r *= -1;
putchar('0'+ r);
return (0);
}
