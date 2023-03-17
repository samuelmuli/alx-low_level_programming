#include <stdio.h>
/**
 *main - main function
 *
 * Return: returns zero
 */
int main(void)
{
	int x = 0;

	for (x = 0; x <= 10; x++)
	{
		putchar(x + '0');
	}

	putchar('\n');
	return (0);
}
