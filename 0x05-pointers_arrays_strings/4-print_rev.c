#include "main.h"
/**
 *print_rev - function prints in reverse
 *
 *@s: parameter
 *
 *Return: void function has no return
 */
void print_rev(char *s)
{
	int x;
	int y = 0;

	for  (x = 0; s[x] != '\0'; x++)
	{
		y++;
	}
	for (x = y; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
