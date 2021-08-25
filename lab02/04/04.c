// Lab2-4 for ÁßÃ¸, A~Z Ãâ·Â
#include <stdio.h>
void main()
{
	char c1, c2;
	for (c1 = 'A'; c1 <= 'Z'; c1++) {
		for (c2 = 'A'; c2 <= c1; c2++) {
			printf("%c", c2);
		}
		printf("\n");
	}
	for (c1 = 'Z'; c1 >= 'A'; c1--) {
		for (c2 = 'Z'; c2 >= c1; c2--) {
			printf("%c", c2);
		}
		printf("\n");
	}
}