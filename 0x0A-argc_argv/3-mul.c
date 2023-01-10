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
	int i, multi = 1;

	for (i = 1; i < argc; i++)
		multi *= atoi(argv[i]);
	printf("%d\n)", multi);
	return (0);
}
