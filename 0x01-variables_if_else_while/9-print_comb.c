#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char x = '0';
while (x <= '9')
{
putchar(x);
putchar(',');
putchar(' ');
x++;
}
putchar('\n');
return (0);
}
