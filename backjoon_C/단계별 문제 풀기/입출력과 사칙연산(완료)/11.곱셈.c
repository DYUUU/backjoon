#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("%d\n", num1 * (num2 % 10));
	printf("%d\n", num1 * ((num2 % 100)/10));
	printf("%d\n", num1 * (num2/100));
	printf("%d", num1 * num2);

	return 0;
}