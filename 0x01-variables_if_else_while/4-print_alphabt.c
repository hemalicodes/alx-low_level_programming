#include<stdio.h>
/**
 * main - Entry point
 *
 * Descriptio: Prints alphabet in lowercase except q and e
 * 
 * Return: 0 Always.
 */

int main(void)
{
  int i;

  for(i = 'a'; i <= 'z'; i++)
  {
    while(i != 'q' || i != 'e')
      {
	putchar(i);
        i++;
      }
  }

  putchar('\n');
  return (0);

}


  
