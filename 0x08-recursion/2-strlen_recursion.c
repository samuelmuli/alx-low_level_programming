#include "main.h"
/**
 *_strlen_recursion - return the length of the string given
 *
 *@s: parameter
 *
 *Return: 0 success
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
