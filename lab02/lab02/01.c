// Lab2-1 for, while, do-while
#include <stdio.h>
void main()
{
	int i, sum;
	sum = 0;
	printf("(1) for ÀÌ¿כ : ");
	for (i=1;i<=10;i++) {
		printf("%d ", i);
		sum += i;
	}
	printf("sum=%d\n", sum);
}
