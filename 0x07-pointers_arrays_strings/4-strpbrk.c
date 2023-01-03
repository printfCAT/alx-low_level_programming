#include "main.h"
/**
* _strpbrk - searche a string for any of a set of bytes
* @s: string 1
* @accept: string 2
*
* Return: pointer to s if occurence is found. NULL otherwise
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
