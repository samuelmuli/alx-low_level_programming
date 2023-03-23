#include "main.h"

/**
 *_isupper - function to print uppercase
 *
 *@c: parameter
 *
 *Return: 1 if it is uppercase
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
