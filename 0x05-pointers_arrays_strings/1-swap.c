#include "main.h"
/**
 * swap_int - check the code
 * @a: swaps with b
 * @b: swaps with a
 */

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
