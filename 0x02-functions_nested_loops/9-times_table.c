#include<stdio.h>
#include "main.h"

/**
 * times_table - Description: prints the 9 times table, starting with 0.
 * Return: prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(i * j);
			j++;
		}
		_putchar('\n');
		i++;
		}
}
