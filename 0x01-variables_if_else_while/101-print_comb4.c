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
	int a;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i <= '9'; i++)
		{
			for (a = i + 1; a <= '9'; a++)
			{
				putchar(c);
				putchar(i);
				putchar(a);
				if (a + 8 != '9')
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
