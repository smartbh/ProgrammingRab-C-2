#include <stdio.h>

void main()
{
	char c1, c2,c3 = 'Z';
	

	for (c1 = 'A'; c1 <= 'Z'; c1++) 
	{
		for (c2 = 'A'; c2 <= c3; c2++) 
		{
			printf("%c", c2);
		}
		printf("\n");
		--c3;
	}
}