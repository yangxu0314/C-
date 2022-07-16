#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(aa + 1);
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//求矩阵转置
// 
// 第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
// 
// 输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//判断上三角
//
//第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (1≤n≤10)
//从2到n + 1行，每行输入n个整数（范围 - 231~231 - 1），用空格分隔，共输入n * n个数。
// 
// 一行，如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行。
//int main()
//{
//    int arr[10][10] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    //输入矩阵
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //判断
//    int tag = 1;
//    for (j = 0; j < n; j++)
//    {
//        for (i = 0; i < n; i++)
//        {
//            if (i > j)
//            {
//                if (arr[i][j] != 0)
//                {
//                    tag = 0;
//                }
//            }
//        }
//    }
//    if (tag)
//    {
//        printf("YES\n");
//    }
//    else
//        printf("NO\n");
//    return 0;
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。

//输出为一行，如果序列有序输出sorted，否则输出unsorted。
//int main()
//{
//    int arr[50] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //判断
//    int tag = 1;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] < arr[i + 1])
//        {
//            int j = 0;
//            for (j = i + 1; j < n - 1; j++)
//            {
//                if (arr[j] > arr[j + 1])
//                {
//                    tag = 0;
//                }
//            }
//        }
//        else if (arr[i] > arr[i + 1])
//        {
//            int j = 0;
//            for (j = i + 1; j < n - 1; j++)
//            {
//                if (arr[j] < arr[j + 1])
//                {
//                    tag = 0;
//                }
//            }
//        }
//        else
//        {
//            continue;
//        }
//    }
//    if (tag)
//    {
//        printf("sorted");
//    }
//    else
//        printf("unsorted");
//    return 0;
//}