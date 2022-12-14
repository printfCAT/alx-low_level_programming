#include "main.h"
/**
* print_alphabet_x10 - Prints alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	do {
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		while (j <= 9)
		_putchar('\n');
	}
}
