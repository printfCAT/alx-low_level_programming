#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 nunbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, n, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	n = atoi(argv[2]);
	multi = n * i;

	printf("%d\n", multi);
	return (0);
}
