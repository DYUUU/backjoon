#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num = 0;
	char word[101];
	int result = 0;
	int check = 0;
	int flag = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", word);
		if (strlen(word) > 2)
		{
			for (int j = 0; word[j] != '\0'; j++)
			{
				for (int k = j; word[k] != '\0'; k++)
				{
					// 다른 알파벳 확인
					if (check == 0 && word[j] != word[k])
					{
						check = 1;
					}
					if(check == 1 && word[j]==word[k])
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
					break;
				check = 0;
			}
			if (flag == 0)
				result++;
			flag = 0;
		}
		else
			result++;
	}

	printf("%d", result);

	return 0;
}
