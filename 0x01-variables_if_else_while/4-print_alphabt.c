#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns zero
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}

		putchar(x);
	}
	putchar('\n');
	return (0);
}
