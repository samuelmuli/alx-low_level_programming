#include <stdio.h>
/**
 * main - main function
 *
 * Return: return zero if successfully executed
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y && x != y && y < z && y != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
