//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int* subject = (int*)malloc(sizeof(int)*n);
//	int max = 0;
//	double avg = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &subject[i]);
//			if (max < subject[i])
//			max = subject[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		avg += (double)subject[i] / max * 100;
//	}
//
//	printf("%lf", avg/n);
//
//	return 0;
//}