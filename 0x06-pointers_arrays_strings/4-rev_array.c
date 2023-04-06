#include "main.h"
/**
 *reverse_array - function that reverses an array
 *
 *@a: parameter
 *
 *@n: parameter
 *
 *Return: voidi
 */
void reverse_array(int *a, int n)
{
	int x, y = 0;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
