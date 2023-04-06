#include "main.h"
/**
* _memset - function fills mem with a const byte
* @s: parameter
* @b: parameter
* @n: parameter
* Return: 0 success
*/
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

