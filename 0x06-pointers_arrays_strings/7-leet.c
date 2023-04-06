#include "main.h"
/**
 *leet - function that encodes 1337
 *
 *@n: parameter
 *
 *Return: 0 success
 */
char *leet(char *n)
{
	int x, y;

	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; i[y] != '\0'; y++)
		{
			if (n[x] == i[y])
			{
				n[x] = j[y];
			}
		}
	}
	return (n)
}
