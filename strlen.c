#include "simpleshell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
return (i);
}
