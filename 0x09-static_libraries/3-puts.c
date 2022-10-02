#include "main.h"
/**
 * _puts - check the code
 *
 * @str: prints a string with next line
 */
void _puts(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
