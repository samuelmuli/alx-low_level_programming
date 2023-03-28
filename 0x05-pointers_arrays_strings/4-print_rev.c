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
	int x = 0;

	while (s[x])
		x++;
	while (x--)
		_putchar(s[x]);
	_putchar('\n');
}
