#include "main.h"
/**
 * print_square - Draw a square
 * @n: the number of lines
 */
void print_square(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

