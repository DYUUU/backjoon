#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	// ���ͺб����� �������� ���� ��
	if (b >= c)
		printf("-1");
	else {
		printf("%d", a / (c - b) + 1);
	}

	return 0;
}