#include <stdio.h>

void main()
{
	char c1, c2, c3 = 'A';


	for (c1 = 'Z'; c1 >= 'A'; c1--)
	{
		for (c2 = 'Z'; c2 >= c3; c2--)
		{
			printf("%c", c2);
		}
		printf("\n");
		++c3;
	}
}