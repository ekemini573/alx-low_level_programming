#include "main.h"
/**
 * puts2 - check the code
 *
 * @str: characetr
 */

void puts2(char *str)
{

int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
