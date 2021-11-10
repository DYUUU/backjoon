#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sol(int n);

int main()
{
	int n = 0;
	scanf("%d", &n);

	if (n < 100)
		printf("%d", n);
	else
		sol(n);
	
	return 0;
}

int sol(int n)
{
	int cnt = 99;
	int result[3] = { 0, };

	for (int i = 100; i <= n; i++)
	{
		result[0] = i / 100;
		result[1] = (i / 10) % 10;
		result[2] = i % 10;
		
		if (result[2] - result[1] == result[1] - result[0])
				cnt++;
	}

	printf("%d", cnt);

	return cnt;
}