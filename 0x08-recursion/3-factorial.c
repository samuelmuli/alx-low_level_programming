#include "main.h"
/**
 *factorial - return factorial of given no.
 *
 *@n: parameter
 *
 *Return: 0 success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
