#include "main.h"
/**
 *_puts - check code
 *
 *@str: parameter
 *
 *Return: void function has no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
