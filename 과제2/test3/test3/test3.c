#include <stdio.h>

void main()
{
	int i, start, daysum, blank;
	int monthday[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month;
	printf("�� �Է� : ");
	scanf("%d", &month);//2�� ==> monthday[1]
	start = 1; // 0:�Ͽ���, 1:��,.. 3:�� ...6:��
	daysum = 0;
	for (i = 0;i < month - 1;i++) {
		printf("a");
		daysum += monthday[i];
	}
	// daysum = 31+28+31+30.....
	blank = (start + daysum) % 7;
	printf("�� �� ȭ �� �� �� ��\n");
	for (i = 0;i<blank;i++)
		printf("   ");
	for (i = 1;i <= monthday[month - 1];i++)
	{
		printf("%2d ", i);
		if ((blank + i) % 7 == 0)
			printf("\n");
	}
	printf("\n");
}