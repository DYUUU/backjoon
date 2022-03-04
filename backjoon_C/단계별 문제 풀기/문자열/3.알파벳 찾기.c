//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char* word = (char*)malloc(sizeof(char) * 100);
//	char tmp = 'a';
//	int alphabet[26];
//	scanf("%s", word);
//
//	for (int i = 0; i<26; i++)
//	{
//		alphabet[tmp - 'a'] = -1;
//
//		for (int j = 0; word[j] != '\0'; j++)
//		{
//			if (word[j] == tmp)
//			{
//				alphabet[tmp - 'a'] = j;
//				break;
//			}
//		}
//		printf("%d ", alphabet[i]);
//		tmp++;
//	}
//
//	return 0;
//}