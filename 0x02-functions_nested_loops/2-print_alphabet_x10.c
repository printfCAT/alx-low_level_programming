#include "main.h"
/**
* print_alphabet_x10 - Prints alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char i;
	int count = 0;

		while (count++ <= 9)
		{
			for (i = 'a'; i <= 'b'; i++)
			{
				_putchar(count);
			}
			_putchar('\n');
		}
}
