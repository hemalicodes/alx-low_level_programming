#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements in a listint_list
 * @h: head of listint_t list pointer
 * Return: nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
for (; h != Null; h = h->next)
{
printf("%d\n", h->n);
num++
}
 return (num);
}
