#include "main.h"
/**
 *puts2 - function start
 *
 *@str: parameter
 *
 *Return: void has no return value
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
