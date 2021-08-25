#include <stdio.h>

int oddsum1(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i+=2)
	{
		sum += i;
	}

	return sum;
}

int oddsum2(int n)
{
	int i = 1;
	int sum = 0;

	while (i <= 100)
	{
		sum += i;
		i+=2;
	}

	return sum;
}

int oddsum3(int n)
{
	if (n <= 1)
		return n;

	else if (n % 2 == 0)

		return oddsum3(n - 1);

	else if (n % 2 == 1)

		return oddsum3(n - 1) + n;
}



int main()
{
	int n = 100;

	int SUM = 0;

	int i;

	printf("<1> for oddsum1<%d> = %d\n", n , oddsum1(n));

	printf("<2> while oddsum2<%d> = %d\n", n, oddsum2(n));

	printf("<1> 재귀 oddsum3<%d> = %d\n", n, oddsum3(n));

	//sum을 구한다.

	for (i = 1; i < 100; i += 2)
	{
		SUM += oddsum1(i);
	}

	printf("<4> SUM = %d\n", SUM);

	return 0;
}