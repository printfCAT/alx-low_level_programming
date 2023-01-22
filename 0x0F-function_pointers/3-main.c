#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - performs simple operations
* @argc: argument count
* @argv: argument vector
*
* Return: result of operation. NULL otherwise
*/
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char operator;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = op(num1, num2);

	printf("%d\n", calc);
	return (0);
}
