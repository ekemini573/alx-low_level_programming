#inclide "main.h"
/**
 * _strlen - check the code
 *
 *@s: calculates the length of the string
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return length;
}
