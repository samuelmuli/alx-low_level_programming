#include "main.h"

/**
 *_abs - coverts a number to absolute value
 *
 *@x: paramenter
 *
 *Return: 0 (success)
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else
		x = x;
	return (x);
}
