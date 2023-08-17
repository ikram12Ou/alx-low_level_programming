#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns the sum of a and b
 * @a: first num
 * @b: second num
 * Return: the sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first num
 * @b: second num
 * Return: the difference
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: first num
 * @b: second num
 * Return: the product
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first num
 * @b: second num
 * Return: the result of division
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first num
 * @b: second num
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
return (a % b);
}
