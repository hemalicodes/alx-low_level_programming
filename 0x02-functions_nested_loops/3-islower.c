#include<stdio.h>
/**
 * _islower(int c) -  checks for lowercase character
 *
 * Returns: 1 0r 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
