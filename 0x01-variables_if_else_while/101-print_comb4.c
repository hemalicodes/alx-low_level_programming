#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0 Always
 */

int main(void)
{
  int i,j,k;

  for (i = 0; i < 7; i++)
    {
      for (j= i +1; j < 8; j++)
	{
	  for (k = k + 1; k < 9; k++)
	    {
	      putchar(i + '0');
	      putchar(j + '0');
	      putchar(k + '0');

	      putchar(',');
	      putchar(' ');

	    }
	}
    }
  putchar('\n');
  return (0);
}
