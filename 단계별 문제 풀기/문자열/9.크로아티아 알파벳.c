#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	// string 담으려면 char*로 활용
	char* croatia[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	char sentence[100];
	char tmp[3] = {'\0',};
	int result = 0;
	int flag = 0;
	scanf("%s", sentence);

	for (int i = 0; sentence[i] != '\0'; i++)
	{

		for (int k = 0; k<3; k++)
		{
			tmp[k] = sentence[i+k];
		}

		for (int j = 0; j < 8; j++)
		{
			if (strncmp(tmp, croatia[j], strlen(croatia[j])) == 0)
			{
				result++;
				i = i + strlen(croatia[j]) - 1;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			result++;
		else
			flag = 0;
	}

	printf("%d", result);

	return 0;
}
