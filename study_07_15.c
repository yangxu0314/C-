#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ʵ��һ�����������������ַ����е�k���ַ���
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
//	//�������ַ���
//	int n = 0;
//	scanf("%d", &n);
//	//��ӡ�ַ���
//	printf("%s", arr);
//	//����
//	left_play(arr, sz-1, n);
//	//��ӡ�ַ���
//	printf("\n%s", arr);
//	return 0;
//}

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
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
	//��Ҫ�ھ����в��ҵ���
	int m = 0;
	scanf("%d", &m);
	//���չ������ά�����м�������
	ADD(arr, 3, 4);
	//��ӡ��ά����
	display(arr, 3, 4);
	//�ھ�����Ѱ��
	int x = xunzhao(arr, 3, 4, m);
	if (x)
	{
		printf("�ھ������ҵ�����%d\n", m);
	}
	else
	{
		printf("�ھ�����û���ҵ�����%d\n", m);
	}
	return 0;
}