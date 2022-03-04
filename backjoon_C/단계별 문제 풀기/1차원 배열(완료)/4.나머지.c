//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num[10] = { 0 };
//	int result[10] = { 0 };
//	int cnt = 0;
//	int flag = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//		result[i] = num[i] % 42;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i+1; j < 10; j++)
//		{
//				if (result[i] == result[j])	
//					flag = 1;
//		}
//		if (flag != 1)
//			cnt++;
//		else
//			flag = 0;
//		if (i == 9 && cnt == 0)
//			cnt++;
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//
//}