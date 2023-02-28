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
char i, *j, *k;
for (k = s; *k != '\0'; ++k)
;
if (k > s)
--k;
for (j = s; j < k; ++j, --k)
{
i = *j;
*j = *k;
*k = i;
}
}

