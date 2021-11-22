#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SWAP(a, b, tmp) (tmp=a, a=b, b=tmp)

int main()
{
	char charNumber1[4];
	char charNumber2[4];
	int tmp = 0;
	int num1 = 0;
	int num2 = 0;

	scanf("%s %s", charNumber1, charNumber2);
	
	SWAP(charNumber1[0], charNumber1[2], tmp);
	SWAP(charNumber2[0], charNumber2[2], tmp);

	num1 = atoi(charNumber1);
	num2 = atoi(charNumber2);

	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
		

	return 0;

}