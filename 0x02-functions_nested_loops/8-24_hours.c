#include "main.h"
/**
* jack_bauer - prints every minute of the day of jack bauer
*
*/
void jack_bauer(void)
{
	int a,b,c,i;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '3'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(i);
				}
			}
		}
	}
	_putchar('\n');
}
