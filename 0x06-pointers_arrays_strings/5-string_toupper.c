#include "main.h"
/**
 *string_toupper -  changes all lowercase letters of a string
 *@s: input
 *Return: Always 0
 */
char *string_toupper(char *)
{
int j;
for (j = 0; s[j] != '\0'; j++)
if (s[j] > 96 && s[j] < 123)
s[j] -= 32;
return (s);
} 
