// Lab2-3 �޷�
#include <stdio.h>
void main()
{
	int i, start, daysum, blank,month;
	int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	start = 6; // 1�� 1�� ���� 0:��, 1:��, .. 6:����� ���� ����
	printf("�� �Է� : ");
	scanf("%d",&month);
	daysum = 0;
	for (i=0;i<month-1;i++) // month ������ ���� ���
		daysum += monthday[i];
	//daysum = 31+28+31; //1,2�� ����
	blank = (start + daysum) % 7;
	printf("�� �� ȭ �� �� �� ��\n");
	for (i=0;i<blank;i++)
		printf("   ");
	for (i=1;i<=monthday[month-1];i++) {
		printf("%2d ", i);
		if ((i+blank)%7==0)
			printf("\n");
	}
	printf("\n");
}
