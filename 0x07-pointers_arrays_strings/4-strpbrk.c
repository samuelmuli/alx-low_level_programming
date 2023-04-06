#include "main.h"
/**
*_strpbrk - function searches a string for any of a set of bytes
*@s: parameter
*@accept: parameter
*Return: 0 success
*/
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}

