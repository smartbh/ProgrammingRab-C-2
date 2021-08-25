#include <stdio.h>
void main()
{

	char c1, c2;
	int i = 0;

	for (c1 = 'A'; c1 <= 'Z'; c1++) 
	{
		for (int j = 0; j < 26 - i; j++)
		{
			printf(" ");
		}
		i+=1;

		for (c2 = 'A'; c2 <= c1; c2++) 
		{
			printf("%c", c2);
		}
		printf("\n");
	}
}