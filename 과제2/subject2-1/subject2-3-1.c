#include <stdio.h>

int main()
{
	int month;

	printf("출력 월을 입력 : ");

	scanf("%d", &month);

	while (true) 
	{
		if (month > 12 || month < 0)
			printf("다시 입력해 주세요");

		else
			break;
	}
	
		

	return 0;
}