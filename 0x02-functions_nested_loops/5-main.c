#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = print_sign(98);
putchar('0'+ r);
r = print_sign(0);
putchar('0'+ r);
r = print_sign(0xff);
putchar('0'+ r);
r = print_sign(-1);
putchar('0'+ r);
return (0);
}
