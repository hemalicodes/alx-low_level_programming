#include "main.h"
/**
 * strcat - concatenates two strings
 * @dest: input
 * @src: input
 * Return: point to dest
 */
char *_strcat(char *dest, char *src)
{
int count = 0, counter = 0;
while(*(dest + count) != '\0')
{
count++;
}
while(counter >= 0)
{
*(dest + count) = *(src + counter);
if(*(src + counter) == '\0')
break;
count++;
counter++;
}
return(dest);
} 
