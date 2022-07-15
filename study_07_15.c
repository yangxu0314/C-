#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//实现一个函数，可以左旋字符串中的k个字符。
//void left_play(char arr[], int sz, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = *arr;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//左旋的字符数
//	int n = 0;
//	scanf("%d", &n);
//	//打印字符串
//	printf("%s", arr);
//	//左旋
//	left_play(arr, sz-1, n);
//	//打印字符串
//	printf("\n%s", arr);
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
void ADD(int arr[3][4], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			/*if (i == 0 && j == 0)
			{
				arr[i][j] = rand() % 1000 + 1;
			}
			else if (i != 0 && j == 0)
			{
				arr[i][j] = rand() % 1000 + 1;
				while (arr[i][j] <= arr[i - 1][j])
				{
					arr[i][j] = rand() % 1000 + 1;
				}
			}
			else if(j != 0 && i == 0)
			{
				arr[i][j] = rand() % 1000 + 1;
				while (arr[i][j] <= arr[i][j - 1])
				{
					arr[i][j] = rand() % 1000 + 1;
				}
			}
			else
			{
				arr[i][j] = rand() % 1000 + 1;
				while (arr[i][j] <= arr[i][j - 1] || arr[i][j] <= arr[i - 1][j])
				{
					arr[i][j] = rand() % 1000 + 1;
				}
			}*/
			if (j == 0)
			{
				if (i == 0)
				{
					arr[i][j] = rand() % 1000 + 1;
				}
				else
				{
					arr[i][j] = rand() % 1000 + 1;
					while (arr[i][j] <= arr[i - 1][j])
					{
						arr[i][j] = rand() % 1000 + 1;
					}
				}
			}
			else
			{
				arr[i][j] = rand() % 1000 + 1;
				while (arr[i][j] <= arr[i][j-1])
				{
					arr[i][j] = rand() % 1000 + 1;
				}
			}
		}
	}
}

void display(int arr[3][4], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int xunzhao(int arr[][4], int row, int col, int m)
{
	int tag = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (m == arr[i][j])
			{
				tag = 1;
			}
		}
	}
	return tag;
}
int main()
{
	srand((unsigned int)time(NULL));
	int arr[3][4] = { 0 };
	//想要在矩阵中查找的数
	int m = 0;
	scanf("%d", &m);
	//按照规则向二维数组中加入数字
	ADD(arr, 3, 4);
	//打印二维数组
	display(arr, 3, 4);
	//在矩阵中寻找
	int x = xunzhao(arr, 3, 4, m);
	if (x)
	{
		printf("在矩阵中找到数字%d\n", m);
	}
	else
	{
		printf("在矩阵中没有找到数字%d\n", m);
	}
	return 0;
}