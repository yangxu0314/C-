#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���������������е����У����������кϲ�Ϊһ���������в������
//5 6
//1 3 7 9 22
//2 8 10 17 33 44

//˼·һ�����������б߱Ƚϴ�С�ߴ�ӡ
int main()
{
	int n, m;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d %d", &n, &m);
	//��arr1��arr2������
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr1 + i);
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", arr2 + j);
	}
	//�߱Ƚϱߴ�ӡ
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

//˼·�����Ȱ��������кϲ���������
//���Ƿ�����̫�鷳��ֻ���ṩ˼���������ع�֪ʶ��
int main()
{
	int n, m;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr3[1000] = { 0 };
	scanf("%d %d", &n, &m);
	//������������
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr1 + i);
	}
	for (j = 0; j < m; j++)
	{
		scanf("%d", arr2 + j);
	}
	//������ϲ�
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
	//���ϲ����������ӡ
	//1.ָ�� 2.ð��
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
	//��ӡarr3
	int a = 0;
	for (a = 0; a < n + m; a++)
	{
		printf("%d ", arr3[a]);//����д��arr3+a
	}
	return 0;
}