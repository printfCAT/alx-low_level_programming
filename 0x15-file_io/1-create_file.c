#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: string to write in the file
*
* Return: 1 on success. -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int ptr, wrt, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(ptr, text_content, len);

	if (ptr == -1 || wrt == -1)
		return (-1);

	close(ptr);

	return (1);
}
