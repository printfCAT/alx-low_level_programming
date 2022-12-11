#include <stdio.h>
/**
* main - Entry main
*
* Return: 0
*/
int main(void)
{
	int c;
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i <= '9'; i++)
		{
			putchar(c);
			putchar(i);
			if (c != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
