#includes "main.h"
#includes <stdio.h>
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
putchar('\n');
else
{
putchar(*s);
puts_recursion(s + 1);
}
}
