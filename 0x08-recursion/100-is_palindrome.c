#include "main.h"
int _pal_check(char *s, int x, int y);
int _len_check(char *s);
/**
 *is_palindrome - checks if it is a palindrome
 *
 *@s: parameter
 *
 *Return: 1 true, 0 false
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal_check(s, 0, _len_check(s)));
}
/**
 *_len_check - checks string length
 *
 *@s: parameter
 *
 *Return: returns string len
 */
int _len_check(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len_check(s + 1));
}
/**
 *_pal_check - checks character
 *
 *@s: parameter
 *
 *@x: parameter
 *
 *@y: parameter
 *
 *Return: 1 true 0 false
 */
int _pal_check(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1)
	return (_pal_check(s, x + 1, y - 1));
}
