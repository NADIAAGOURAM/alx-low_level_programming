#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */

void more_numbers(void)
{
	char n, c;
	int i;

	for (i = 0; i < 10; i++)
	{
		n = 0;
		while (n <= 14)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
			n++;
		}
		_putchar('\n');
	}
}
