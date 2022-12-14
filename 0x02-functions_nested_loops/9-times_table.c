#include<stdio.h>

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
			putchar(i * j);
			j++;
		}
		putchar('\n');
		i++;
		}
}
