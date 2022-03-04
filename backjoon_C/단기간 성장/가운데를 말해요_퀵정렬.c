#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;    // 오름차순
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	//int *arr=(int*)malloc(sizeof(int)*2);
	int arr[100001];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		qsort(arr, i+1, sizeof(int), compare);
		
		if (i % 2 == 0)
		{
			printf("%d\n", arr[i / 2]);
		}

		else
		{
			if ((arr[i / 2] > arr[i / 2 + 1]) ? printf("%d\n", arr[i / 2 + 1]) : printf("%d\n", arr[i / 2]));
		}
			
	}



	return 0;
}