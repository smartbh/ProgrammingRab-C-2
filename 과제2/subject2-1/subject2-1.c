#include <stdio.h>

int main() {
	
	printf("(1) for ��� : ");
	int sum = 0;
	int i = 1;

	//for ��

	for ( i = 1; i <= 10; i++)
		{
			printf("%d ", i);
			sum += i;
		}

	printf("sum = %d\n", sum);

	//while ��
	
	sum = 0;
	i = 1;

	printf("(2) while ��� : ");

	while ( i <= 10)
	{
		printf("%d ", i);
		sum += i;
		i++;
	}

	printf("sum = %d\n", sum);

	//do ~ while ��

	sum = 0;
	i = 1;

	printf("(2) do ~ while ��� : ");

	do {
		printf("%d ", i);
		sum += i;
		i++;
	} while (i <= 10);	

	printf("sum = %d\n", sum);

		return 0;
}