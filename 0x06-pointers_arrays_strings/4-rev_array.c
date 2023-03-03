#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: input
 *@n: input
 *Return: Returnsnothing
 */
void reverse_array(int *a, int n)
{
int j, temp, i = n;
for (i--, j = 0; j < n / 2; j++, i--)
temp = a[j],a[j] = a[i], a[i] = temp;
}
