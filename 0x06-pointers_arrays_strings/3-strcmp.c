#include "main.h"
/**
 *_strcmp - function that compares two strings
 *@s1: input
 *s2: input
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
int j;
for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
if (s1[j] != s2[j])
return (s1[j] != s2[j]);
return (0);
}
