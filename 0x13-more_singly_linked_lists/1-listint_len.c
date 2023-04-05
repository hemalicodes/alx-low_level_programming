#include <stdio.h>
#include <stdlib.h>
#include <lists.h>
/**
 * listint_len - Returns the number of elements in  a linked listint_t list
 * @h: input
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t int = 0;
while(h! = 0)
{
int++;
h = h -> next;
}
return(int);
}
