#include <stdio.h>
#include <stdlib.h>
/**
* main - prints minimum no. of coins to make change
* @argc: count of arguments passed
* @argv: vector of arguments
*
* Return: no. of coins on success. 0 or 1 otherwise
*/
int main(int argc, char *argv[])
{
	int i = 0, total = 0, number = 0, change = 0;
	int coins[] = {25, 10, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[i] != '\0')
	{
		if (total >= coins[i])
		{
			number = (total / coins[i]);
			change += number;
			total -= coins[i] * number;
		}
		i++;
	}
	printf("%d\n", change);
	return (0);
}
