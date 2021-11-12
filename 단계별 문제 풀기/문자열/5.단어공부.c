#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char* sentence = (char*)malloc(sizeof(char) * 1000000);
	int alphabet[26] = { 0, };
	int max = 0;
	int num = 0;
	int flag = 0;

	scanf("%s", sentence);

	for (int i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] >= 'A' && sentence[i] <= 'Z')
			alphabet[sentence[i] - 'A']++;
		else
			alphabet[sentence[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			num = i;
			flag = 0;
		}

		for (int j = 0; j < 26; j++)
		{
			if (num != j)
			{
				if (alphabet[j] == max)
				{
					flag = 1;
					break;
				}
			}
		}
	}

	if (flag == 0)
		printf("%c", num + 'A');
	else
		printf("?");

	return 0;
}