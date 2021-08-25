// Lab2-3 달력
#include <stdio.h>
void main()
{
	int i, start, daysum, blank,month;
	int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	start = 6; // 1월 1일 요일 0:일, 1:월, .. 6:토요일 부터 시작
	printf("월 입력 : ");
	scanf("%d",&month);
	daysum = 0;
	for (i=0;i<month-1;i++) // month 전까지 날수 계산
		daysum += monthday[i];
	//daysum = 31+28+31; //1,2월 날수
	blank = (start + daysum) % 7;
	printf("일 월 화 수 목 금 토\n");
	for (i=0;i<blank;i++)
		printf("   ");
	for (i=1;i<=monthday[month-1];i++) {
		printf("%2d ", i);
		if ((i+blank)%7==0)
			printf("\n");
	}
	printf("\n");
}
