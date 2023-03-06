#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
