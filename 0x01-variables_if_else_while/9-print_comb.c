#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = '0';
while (x <= '8')
{

putchar(x);
putchar(',');
putchar(' ');

x++;
}
putchar('9');
return (0);
}
