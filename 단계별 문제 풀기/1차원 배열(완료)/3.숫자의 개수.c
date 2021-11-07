//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int cnt[10] = { 0 };
//	int result = 0;
//	int ten = 10;
//
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	result = a * b * c;
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (result % ten == i)
//			{
//				cnt[i]++;
//			}
//			if (result / ten < 1)
//			{
//				break;
//			}
//			result /= 10;
//		}
//		result = a * b * c;
//		printf("%d\n", cnt[i]);
//	}
//
//	return 0;
//}