//#define _CRT_NO_SECURE_WARNINGS
//#include <stdio.h>
//
//void selfNumber();
//int notSelfNumber(int num);
//
//int main()
//{
//	selfNumber();
//	
//	return 0;
//}
//
//void selfNumber()
//{
//	int num = 1;
//	while (num <= 10000)
//	{
//		if (notSelfNumber(num))
//			printf("%d\n", num);
//		num++;
//	}
//}
//
//int notSelfNumber(int num)
//{
//	int result = 0;
//	int tmp = 0;
//	for (int i = 1; i < num; i++)
//	{
//		tmp = i;
//		result = tmp;
//		for (int j = 0; tmp >= 1; j++)
//		{
//			result += tmp % 10;
//			tmp /= 10;
//		}
//		if (result == num)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
