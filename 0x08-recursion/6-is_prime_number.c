#include "main.h"
int _get_prime(int x, int y);
/**
 *is_prime_number - checks if n is prime
 *
 *@n: parameter
 *
 *Return: returns 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (_get_prime(n, n - 1));
}
/**
 *_get_prime - checks if n is prime
 *
 *@x: parameter
 *
 *@y: parameter
 *
 * Return: 1 is prime else 0
 */
int _get_prime(int x, int y)
{
	if (x == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (_get_prime(x, y - 1));
}
