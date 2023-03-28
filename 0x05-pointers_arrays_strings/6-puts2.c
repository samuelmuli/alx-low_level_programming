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

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
