#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: the number to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
