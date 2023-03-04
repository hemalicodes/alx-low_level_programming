#include "main.h"
#include <stdio.h>
/**
 *print_buffer - function that prints a buffe
 * @b: input
 * @size: input
 * Return: always 0
 */
void print_buffer(char *b, int size)
{
if (size <= 0) {
printf("\n");
return;
}
for (int i = 0; i < size; i += 10) {
printf("%08x ", i);
for (int j = 0; j < 10; j++) {
if (i + j < size) {
printf("%02x", b[i + j]);
} else {
printf("  ");
if (j % 2 == 1) {
printf(" ");
}
}
for (int j = 0; j < 10; j++) {
if (i + j < size) {
if (b[i + j] >= 32 && b[i + j] <= 126) {
printf("%c", b[i + j]);
} else {
printf(".");
}
}
}
printf("\n");
}
}
