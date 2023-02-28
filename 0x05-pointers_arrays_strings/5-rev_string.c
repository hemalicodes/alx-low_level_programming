#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - reverses astring
 * @s: input
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
int len = strlen(s);
int i,j;
char temporary;
for(i = 0; j = len - 1; i < j; i++; j--)
temporary = s[i];
s[i] = s[j];
s[j] = temp;
}
}
