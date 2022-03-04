#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int student = 0;
	scanf("%d", &n);
	int* score = (int*)malloc(sizeof(int) * 1000);
	double avg = 0;
	int above_avg = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &student);

		for (int j = 0; j < student; j++)
		{
			scanf("%d", &score[j]);
			avg += score[j];
		}

		avg /= student;

		for (int k = 0; k < student;k++)
		{
			if (score[k] > avg)
				above_avg++;
		}
		printf("%.3lf%%\n", (double)above_avg / student * 100);

		avg = 0;
		above_avg = 0;

	}

	return 0;
}