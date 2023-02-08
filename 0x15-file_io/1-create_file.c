#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
	int ptr, wrt;

	if (!text_content)
	{
		ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (ptr == -1 || filename == NULL)
			return (-1);
		return (1);
	}

	text_content = malloc(sizeof(char) * (strlen(text_content) - 1));
	if (text_content == NULL)
		return (-1);

	ptr = open(filename, O_CREAT | O_EXCL | O_RDWR | O_TRUNC, 0600);
	wrt = write(ptr, text_content, sizeof(text_content));
	if (ptr == -1 || wrt == -1 || filename == NULL)
	{
		free(text_content);
		return (-1);
	}

	free(text_content);
	close(ptr);

	return (1);
}
