#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int x = '0', y;
  while (x <= '8')
    {
      y = '1';
      while (y <= '9')
	{

	  if (y != x)    
	  putchar(x);
	  if (x != y)
	  putchar(y);

 
	  putchar(' ');
	  y++;
	    
	}
      x++;
    }
  putchar('\n');
  return (0);
}
