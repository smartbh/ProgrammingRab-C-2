#include <stdio.h>

int main()
{
	int month;

	printf("��� ���� �Է� : ");

	scanf("%d", &month);

	while (true) 
	{
		if (month > 12 || month < 0)
			printf("�ٽ� �Է��� �ּ���");

		else
			break;
	}
	
		

	return 0;
}