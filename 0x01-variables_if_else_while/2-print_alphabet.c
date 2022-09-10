#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, lowercase;
x = 'A';

while (x <= 'Z')
{
lowercase =  tolower(x);
putchar(lowercase);
x++;
}
return (0);
}
