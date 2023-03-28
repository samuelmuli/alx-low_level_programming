#include "main.h"
/**
 *rev_string - function start
 *
 *@s: parameter
 *
 *Return: void
 */
void rev_string(char *s)
{
	int len, i, j;
	char y;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	j = len / 2;

	while (j--)
	{
		y = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = y;
		i++;
	}
}
