#include "main.h"
/**
 * _strlen - length of string
 * Return: length
 * @s: calculates the length of the string
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
