#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			result = s1[i] - s2[i];
			break;
		}
		else if (s1[i] != '\0' && s2[i] == '\0')
		{
			result = 1;
			break;
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			result = 0;
		}
		else if (s1[i] - s2[i] == 0)
		{
			result = 0;
		}
		else if (s1[i] == '\0' && s2[i] != '\0')
		{
			result = -1;
			break;
		}

		i++;
	}
	return (result);
}
