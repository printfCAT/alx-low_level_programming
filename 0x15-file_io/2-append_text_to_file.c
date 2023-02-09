#include <string.h>
#include "main.h"
#include <stdio.h>
/**
* append_text_to_file - appends text at the end of file
* @filename: name of file
* @text_content: content to append to end of file
*
* Return: 1 on success. -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	ptr = open(filename, O_WRONLY | O_APPEND);
	if (ptr == -1)
		return (-1);
	if (text_content != NULL)
		len = write(ptr, text_content, strlen(text_content));
	close(ptr);
	if (len == -1)
		return (-1);
	return (1);
}
