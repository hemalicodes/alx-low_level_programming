#include<stdio.h>
/**
 * main -Entry point
 *
 * Description:  prints _putchar
 *
 * Return: 0 Always
 */
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
putchar(*sh);
sh++;
}
putchar('\n');
return (0);
}
