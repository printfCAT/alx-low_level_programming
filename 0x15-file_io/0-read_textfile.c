#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"
/**
* read_textfile - reads and writes text from a file and prints it
* @filename: pointer to file containing text
* @letters: number of letters it should read and print
*
* Return: numbers of letters read and printed. 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	char *ch;
	ssize_t rd, wrt;

	if (filename == NULL)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);

	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);

	rd = fread(ch, sizeof(char), letters, ptr);
	if (rd == 0)
	{
		free(ch);
		return (0);
	}

	wrt = fwrite(ch, sizeof(char), rd, stdout);
	if (wrt == 0 || wrt != rd)
	{
		free(ch);
		return (0);
	}

	if (ferror(ptr))
	{
		free(ch);
		return (0);
	}

	free(ch);
	fclose(ptr);
	return (wrt);
}
