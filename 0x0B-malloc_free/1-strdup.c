#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory which contains a copy of the string passed.
 * @str: the source string
 * Return: returns a pointer to the string duplicated. It returns NULL
 * if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if string is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));
	/* check if malloc was successful */
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
