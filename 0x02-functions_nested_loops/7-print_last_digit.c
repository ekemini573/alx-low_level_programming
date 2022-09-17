#include "main.h"
/**
 * print_last_digit - Entry point
 * @l: last digit is possible
 * Return: last digit (Success)
 */

int print_last_digit(int l)
{

int lastdigit = l % 10;
if (lastdigit < 0)
{
lastdigit = (-1) * lastdigit;
}
putchar(lastdigit + '0');

return (lastdigit);
}

