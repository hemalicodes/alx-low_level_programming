#include "main.h"
#include <stdio.h>
/**
 *puts_half - prints half of a string
 *
 *@str: input
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
i = i / 2;
}
else
{
i = (i + 1) / 2;
}
while (str[i] != '\0')
{
j = str[i];
i++;
putchar(j);
}
putchar('\n');
} 
