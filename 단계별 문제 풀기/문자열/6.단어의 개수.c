#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char sentence[1000000];
	scanf("%[^\n]s", sentence);

	int flag = 0;
	int num = 0;

	for (int i = 0; sentence[i] != NULL; i++)
	{
		if (flag == 0)
		{
			if (sentence[i] >= 'A' && sentence[i] <= 'Z'
				|| sentence[i] >= 'a' && sentence[i] <= 'z')
				flag = 1;
		}
		if (flag == 1 && (sentence[i] == ' ' || sentence[i+1] == '\0'))
		{
			flag = 0;
			num++;
		}
	}

	printf("%d", num);

	return 0;
}