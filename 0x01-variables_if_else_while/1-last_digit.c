#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last_digit = n % 10;
printf("last digit of %d is", n);

if (n > 5)
{
printf(" %d and is greater that 5\n", last_digit);
}
else if (n == 0)
{
printf(" %d and is 0\n", last_digit);
}
else if (n < 6 && n != 0)
{
printf(" %d and is less than 6 and not 0" last_digit);
}
return (0)
}