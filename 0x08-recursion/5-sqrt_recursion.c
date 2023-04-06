#include "main.h"
int _get_sqrt(int x, int y);
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
	return (_get_sqrt(n, 0));
}
/**
 *_get_sqrt - function recursion
 *
 *@x: parameter
 *
 *@y: parameter
 *
 * Return: returns the square root
 */
int _get_sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (_get_sqrt(x, y + 1));
}
