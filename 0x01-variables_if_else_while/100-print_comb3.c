#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int a;
int b;
for (a = 49; a < 57; a++)
{
for (b = a + 1; b <= 57; b++)
{
if (b != a)
{
putchar(a);
putchar(b);
if (a == 56 && b == 57)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
