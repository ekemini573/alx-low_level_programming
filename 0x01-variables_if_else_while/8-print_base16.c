#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char num = '0', alph = 'a';
while (num <= '9')
{
putchar(num);
num++;
}

while (alph <= 'f')
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
