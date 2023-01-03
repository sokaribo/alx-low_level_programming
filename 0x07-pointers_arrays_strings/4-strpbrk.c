#include "main.h"

/**
 * _strpbrk - prints the consecutive character of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
