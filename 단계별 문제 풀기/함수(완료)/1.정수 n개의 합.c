//#define _CRT_NO_SECURE_WARNINGS
//#include <stdio.h>
//
//long long sum(int* a, int n);
//int main()
//{
//	int* a = (int*)malloc(sizeof(int) * 3000000);
//	int n = 0;
//
//
//	return 0;
//}

long long sum(int* a, int n)
{
	long long sum = 0;
	for (int i = 0; i < n; i++)
		sum = a[i];
	return sum;
}
