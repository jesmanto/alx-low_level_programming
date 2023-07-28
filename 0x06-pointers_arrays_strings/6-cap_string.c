#include "main.h"

/**
 * cap_string - capitalize the first letter of every word
 * @c: string
 * Return: calpitalized string
 */
char *cap_string(char *c)
{
	int *pts;
	char *ptr;

	int separator = 1;
	int i = 0;

	while (c[i] != '\0')
	{
		pts = &separator;
		ptr = &c[i];
		if (separator == 1)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32;
				separator = 0;
			}
			else if (c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == ',')
				iterator(pts, 1, ptr, c[i]);
			else if (c[i] == 34 || c[i] == 40 || c[i] == 41 || c[i] == 59 || c[i] == 9)
				iterator(pts, 1, ptr, c[i]);
			else if (c[i] == '{' || c[i] == '}' || c[i] == 32 || c[i] == '\n')
				iterator(pts, 1, ptr, c[i]);
			else
				iterator(pts, 0, ptr, c[i]);
		}
		else
		{
			if (c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == '\n')
				iterator(pts, 1, ptr, c[i]);
			if (c[i] == 34 || c[i] == '(' || c[i] == ')' || c[i] == ',')
				iterator(pts, 1, ptr, c[i]);
			if (c[i] == '{' || c[i] == '}' || c[i] == 32 || c[i] == 9 || c[i] == ';')
				iterator(pts, 1, ptr, c[i]);
		}
		i++;
	}
	return (c);
}

/**
 * iterator - iterates the loop
 * @separator: indicates if theers's a symbol
 * @val: new value for separator
 * @el: current element
 * @e: new character after symbol
 * Return: void
 */
void iterator(int *separator, int val, char *el, char e)
{
	*el = e;
	*separator = val;
}
