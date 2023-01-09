#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string 1
* @accept: string 2
*
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}
