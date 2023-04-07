#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, temp = n;
	int count = 0;

	while (temp >>= 1)
		mask = (mask << 1) | 1;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		mask >>= 1;
	}
	if (!count)
		_putchar('0');
}
