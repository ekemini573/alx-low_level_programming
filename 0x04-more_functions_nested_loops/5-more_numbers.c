#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 1; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
_putchar('\n');
}