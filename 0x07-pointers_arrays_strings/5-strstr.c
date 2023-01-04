#include "main.h"
/**
* _strstr - locates a substring
* @haystack: target string
* @needle: string
*
* Return: pointer to beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (needle[i] != '\0')
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (&needle[i] - i);
		}
		i++;
	}
	return ('\0');
}
