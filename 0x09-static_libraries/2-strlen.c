#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
