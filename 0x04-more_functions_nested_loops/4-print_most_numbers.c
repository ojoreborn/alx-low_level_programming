#include "main.h"

/**
 * print_most_numbers - print the numbers fron 0 to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers since 0 to 9
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 48 ; ch <= 58 ; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
