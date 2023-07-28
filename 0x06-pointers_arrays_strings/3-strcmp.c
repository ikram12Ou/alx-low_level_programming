#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: If str1 < str2, negative difference
 * If str1 == str2, 0
 * If str1 > str2, positive difference
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
