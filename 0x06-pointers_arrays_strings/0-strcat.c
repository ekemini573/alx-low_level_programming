#include "main.h"
/**
 * *_strcat - check the code
 * @dest: string 1
 * @src: string 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, int j = strlen(src);
for (i = 0; src[i] != '\0'; i++)
{
dest[i + j] = src[i];
}
dest[i + j] = '\0';
}
