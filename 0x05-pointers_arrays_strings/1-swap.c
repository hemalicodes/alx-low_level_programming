#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 *@a: input
 *@b: input
 *
 *Return: 0 Always
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
