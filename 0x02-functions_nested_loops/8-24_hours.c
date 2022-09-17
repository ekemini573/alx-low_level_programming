#include "main.h"

/**
 * jack_bauer - print time
 */

void jack_bauer(void)
{
int h;
int min;


for (h = 0; h <= 23; h++)
{
for (min = 0; min <= 59; min++)
{

putchar((h / 10) + '0');
putchar((h % 10) + '0');
putchar(':');
putchar((min / 10) + '0');
putchar((min % 10) + '0');
putchar('\n');

}

}
}
