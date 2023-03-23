#include "main.h"

/**
 *_isdigit - function to check digit
 *
 *@c: parameter
 *
 *Return: 1 if true
 *
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
