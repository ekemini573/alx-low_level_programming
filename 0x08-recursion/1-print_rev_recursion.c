#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: character in the string
 */
void _print_rev_recursion(char *s)
{
if (s[0] == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_puts(s[0]);
}
