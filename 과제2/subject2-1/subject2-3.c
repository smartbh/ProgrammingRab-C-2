#include <stdio.h>

int main() {
	int month[12] = { 31, 28 ,31,30,31,30,31,31,30,31,30,31 };
	int day;


	printf("�� �� ȭ �� �� �� ��\n");

	for (day = 1; day <= month[0]; day++) 
	{
		printf("%2d ", day);

		if (day % 7 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}