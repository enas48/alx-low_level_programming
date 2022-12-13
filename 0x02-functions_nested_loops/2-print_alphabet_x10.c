#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Description: alphabet
 * Return: abcdef..z
*/
void print_alphabet_x10(void)
{
	char c;

	int a = 0;

	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		a++;
		_putchar('\n');
	}
}
