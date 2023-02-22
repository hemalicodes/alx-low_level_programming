#include<stdio.h>
/**
 * _islower -  checks for lowercase character
 * @c - character input
 * Return: 1 if int c is lowercase 0r 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
