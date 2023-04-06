#include "main.h"
/**
 *_strncpy - function to concat two strings
 *
 *@dest: parameter
 *
 *@src: parameter
 *
 *@n: parameter
 *
 *Return: 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
