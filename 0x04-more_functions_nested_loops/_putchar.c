#include "main.h"
#include "unistd.h"
/**
 * putchar() - display characters
 *@c - input
 *
 * Return: 1 when successful or 0 
 */
int_putchar(char c)
{
return(write(1,&c,1))
}
