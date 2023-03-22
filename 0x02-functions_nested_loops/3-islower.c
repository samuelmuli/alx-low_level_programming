#include "main.h"
/**
 *_islower - function to print lower case
 *
 *@c: parameter
 *
 *Return: 1 if it is lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
