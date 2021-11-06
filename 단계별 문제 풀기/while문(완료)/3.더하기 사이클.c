#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0; 
	scanf("%d", &n);
	int result = n;
	int cnt = 0;

	while (1)
	{
		cnt++;
		result = ((result % 10) * 10) + ((result / 10 + result % 10) % 10);
		if (result == n)
			break;
	}

	printf("%d", cnt);


	return 0;
}