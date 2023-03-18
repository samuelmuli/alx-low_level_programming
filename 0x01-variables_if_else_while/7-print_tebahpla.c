#include <stdio.h>
/**
 *main - main function
 *
 * Return: returns zero
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev > 'a'; rev--)
	{
		putchar(rev);
	}

	putchar('\n');
	return (0);
}
