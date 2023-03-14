#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *s;
s = (char *) malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (unsigned int i = 0; i < size; i++)
s[i] = c;
return (s);
}
