#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	c = CHAR_MIN;
	for(c < CHAR_MAX;;)
	{
		printf("%d\n", c++);
	}
	exit(EXIT_SUCCESS);
}
