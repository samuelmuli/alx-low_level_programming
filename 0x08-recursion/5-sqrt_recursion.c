#include "main.h"
/**
 *_sqrt_recursion - returns natural sqaure root of n
 *
 *@n: parameter
 *
 *Return: 0 success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recurs(n, 0));
}
/**
 *sqrt_recurs - function recursion
 *
 *@x: parameter
 *
 *@y: parameter
 *
 * Return: returns the square root
 */
int sqrt_recurs(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (sqrt_recurs(x, y + 1));
}
