#include<stdio.h>
/**
 *Main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  char charType;
  int intType;
  long long int  longType;
  float floatType;

  /*sizeof evaluates size of variable*/
  printf("Size of a char: %zu byte(s)", sizeof(charType));
  printf("Size of an int: %zu byte(s)", sizeof(intType));
  printf("Size of a long int: %zu byte(s)", sizeof(longType));
  printf("Size of a long long int: %zu byte(s)", sizeof(longType));
  printf("Size of a float: %zu byte(s)", sizeof(floatType));

  return 0;
}
