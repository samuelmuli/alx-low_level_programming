#include "main.h"
/**
 *string_toupper - function that converts lower to upper
 *
 *@n: parameter
 *
 *Return: 0 success
 */
char *string_toupper(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'Z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
