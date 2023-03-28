#include "main.h"
/**
 *swap_int - swap function
 *
 *@a: parameter
 *
 *@b: parameter
 *
 *Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
