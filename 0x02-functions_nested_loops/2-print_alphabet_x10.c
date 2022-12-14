#include "main.h"
/**
* print_alphabet_x10 - Prints alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i = 0;

	do {
		int j = 0;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
		while ( i <= 9);
		_putchar('\n');
}
