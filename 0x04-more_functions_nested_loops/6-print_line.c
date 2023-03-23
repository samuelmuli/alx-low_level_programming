#include "main.h"

/**
 *print_line - function prints line
 *
 *@n: parameter
 *
 *Return: 0 (success)
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
