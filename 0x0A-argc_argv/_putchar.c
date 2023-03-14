#include "main.h"
#include <stdio.h>
/**
 *_putchar - writes char c to stdout
 * @c: input
 * Return: On success 1,
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1,&c, 1));
}
