// Lab2-4 for 중첩, A~Z 출력
// CTRL-A, ALT-F8
#include <stdio.h>
void main()
{
	int sum = 0;
	int i;
	printf("(1) for 사용 : ");
	for (i=1;i<=10;i++) 
	{
		printf("%d ", i);
		sum += i;
	}
	printf("sum=%d\n", sum);
}
