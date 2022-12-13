#include <stdio.h>
/**
* main -Entry point
*
* Return: 0
*/
int main(void)
{
	int i, c;

	for (i = '0'; i < 100; i++)
	{
		for (c = '0'; c < 100; c++)
		{
			if (i < c)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				if (i != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
