#include "main.h"
/**
 * _abs - Entry point
 * @a: caracter for abs
 * Return: the value of a
 */
int _abs(int a)
{
if (a < 0)
{
a = (-1) * a;

return (-a);
}
else
return (a);
}
