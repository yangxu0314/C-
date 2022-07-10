#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//5 6
//1 3 7 9 22
//2 8 10 17 33 44

//思路一：将两个序列边比较大小边打印
int main()
{
	int n, m;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d %d", &n, &m);
	//往arr1和arr2中输入
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr1 + i);
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", arr2 + j);
	}
	//边比较边打印
	int r = 0;
	int k = 0;
	while (r < n && k < m)
	{
		if (arr1[r] < arr2[k])
		{
			printf("%d ", arr1[r]);
			r++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (r < n)
	{
		for (; r < n; r++)
		{
			printf("%d ", arr1[r]);
		}
	}
	else
		for (; k < m; k++)
		{
			printf("%d ", arr2[k]);
		}
	return 0;
}

//思路二：先把两个序列合并，再排序
//但是方法二太麻烦，只是提供思考，用来回顾知识点
int main()
{
	int n, m;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr3[1000] = { 0 };
	scanf("%d %d", &n, &m);
	//往数组里输入
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr1 + i);
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", arr2 + j);
	}
	//将数组合并
	int r = 0;
	for (r = 0; r < n + m; r++)
	{
		if (r < n)
		{
			arr3[r] = arr1[r];
		}
		else
		{
			arr3[r] = arr2[r - n];
		}
	}
	//将合并数组排序打印
	//1.指针 2.冒泡
	int count = 0;
	for (count = 0; count < m + n; count++)
	{
		int* p1 = arr3;
		int* p2 = arr3 + 1;
		while (p1 < &arr3[m + n] && p2 < &arr3[m + n])
		{
			if (*p1 > *p2)
			{
				int tmp = *p1;
				*p1 = *p2;
				*p2 = tmp;
			}
			p1 = p2;
			p2++;
		}
	}
	//打印arr3
	int a = 0;
	for (a = 0; a < n + m; a++)
	{
		printf("%d ", arr3[a]);//不能写成arr3+a
	}
	return 0;
}