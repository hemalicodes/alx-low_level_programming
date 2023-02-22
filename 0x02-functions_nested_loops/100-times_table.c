#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
 // Check if n is valid (between 0 and 15)
if (n < 0 || n > 15) {
return;
}
// Print the multiplication table
for (int i = 0; i <= 10; i++)
{
printf("%d x %d = %d\n", i, n, i * n);
}
}
