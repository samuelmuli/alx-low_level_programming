#include "main.h"

/**
 *_isalpha - prints both lowecase and uppercase
 *
 *@c: parameter to be printed
 *
 *Return: 0 success
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
