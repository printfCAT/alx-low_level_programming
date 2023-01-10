#include <stdio.h>
/**
* main - prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", argc - 1);
	return (0);
}
