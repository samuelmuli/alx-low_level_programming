#include "main.h"
/**
 **_strcpy - the function copies a string pointed to by src
 *
 *@dest:parameter
 *
 *@src:paramenter
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {

		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');
	return (dest);
}
