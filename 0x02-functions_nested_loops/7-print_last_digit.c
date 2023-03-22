#include "main.h"
/**
 *print_last_digit - main function
 *
 *@x: parameter
 *
 *Return: 0 (success)
 *
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	return (y);
}
