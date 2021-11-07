//#define	_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	char* ox = (char*)malloc(80);
//	int flag = 1;
//	int answer = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		/*for (int k = 0; ox[k] != '\0'; k++)
//			ox[k] = '\0'; */
//
//		scanf("%s", ox);
//
//		for (int j = 0; ox[j] != '\0'; j++)
//		{
//			if (ox[j] == 'O')
//			{
//				answer += flag;
//				flag++;
//			}
//			else if (ox[j] == 'X')
//				flag = 1;
//		}
//		
//		printf("%d\n", answer);
//		flag = 1;
//		answer = 0;
//	}
//
//
//	return 0;
//}