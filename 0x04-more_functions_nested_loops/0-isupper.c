#include "main.h"

/**
 * _isupper - checks if a letter is upper
 * @c: the letter to be checked
 * Return: 1 for uppercase or 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
