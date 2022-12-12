#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int a, b, c, i;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (i = '1'; i <= '9'; i++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(i);
					if ((a == '9') && (b == '9') && (c == '9') && (i == '9'))
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
