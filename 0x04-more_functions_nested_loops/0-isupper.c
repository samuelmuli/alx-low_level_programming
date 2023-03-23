#include "main.h"

/**
 *_isupper - function prints uppercase alphabets
 *
 *@c: parameter to be passed
 *
 *Return: 0 (success)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
