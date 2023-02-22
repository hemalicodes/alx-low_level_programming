#include<stdio.h>
/**
 *
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
int i, counter;
counter = 0;
while (counter < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
counter++;
putchar('\n');
}
}
