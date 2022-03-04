//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int tmp = 0;
//
//    int* arr = (int*)malloc(sizeof(int) * 2);
//
//    for (int i = 1; i <= n; i++)
//    {
//        realloc(arr, sizeof(int) * (i + 1));
//        scanf("%d", &arr[i]);
//
//        // 선택 정렬
//        for (int j = 1; j <= i; j++)
//        {
//           for (int k = j+1; k <= i; k++)
//           {
//              if (arr[j] > arr[k])
//              {
//                 tmp = arr[j];
//                 arr[j] = arr[k];
//                 arr[k] = tmp;
//              }
//           }
//        }
//
//        if (i % 2 == 0)
//        {
//            if ((arr[i / 2] > arr[i / 2 + 1]) ? printf("%d\n", arr[i / 2 + 1]) : printf("%d\n", arr[i / 2]));
//        }
//
//        else
//        {
//            printf("%d\n", arr[i / 2 + 1]);
//        }
//
//    }
//
//
//
//    return 0;
//}