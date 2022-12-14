#include<stdio.h>
#include "main.h"

/**
 * times_table - Description: prints the 9 times table, starting with 0.
 * Return: prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i = 0, j, m;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			m = i * j;
			if ((m / 10) == 0)
			{
				_putchar(' ');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			j++;
			if (j == 10)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
