#include "main.h"
#include <string.h>
/**
 *_strlen - function returns length of a string
 *
 *@s: parameter
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int x;
	int y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		y++;
	}
	return (y);
}
