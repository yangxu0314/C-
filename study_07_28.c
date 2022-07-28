#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//˼·һ��ÿ����תһ����ִ��k��
void my_reverse1(int* p, int len, int k)
{
	if (k > len)
	{
		k = k % len;
	}
	while (k)
	{
		int i = 0;
		int tmp = *(p + len - 1);
		for (i = len - 1; i > 0; i--)
		{
			*(p + i) = *(p + i - 1);
		}
		*(p + i) = tmp;	
		k--;
	}
}
//˼·��������һ���յ�����2����ԭ�����k��Ԫ���ȷŵ��������У��ٰ�ǰlen-k��Ԫ�طŵ���������У�����ٽ�����2����ԭ����
void my_reverse2(int* p, int len, int k)
{
	k = k % len;
	int arr[100] = { 0 };
	int i = 0;
	int j = 0;
	//����k��Ԫ�ط���������
	for (i = len - k; i < len; i++)
	{
        arr[j] = *(p + i);
		j++;
	}
	//��ǰlen-kԪ�ط���������
	for (i = 0; i < len - k; i++)
	{
		arr[j] = *(p + i);
		j++;
	}
	//�����鸲��ԭ����
	for (i = 0; i < len; i++)
	{
		*(p + i) = arr[i];
	}
}
//˼·������ǰlen-k��Ԫ�ط�ת���ٽ���k��Ԫ�ط�ת������ٽ��������鷴ת
void reverse(int* p, int k)
{
	int* a = p + k - 1;
	while (p < a)
	{
		int tmp = *p;
		*p = *a;
		*a = tmp;
		p++;
		a--;
	}
}

void my_reverse3(int* p, int len, int k)
{
	k = k % len;
	reverse(p, len - k);
	reverse(p + len - k, k);
	reverse(p, len);
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8};
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	//��ת���飬n��������ת�Ĵ���
	my_reverse2(arr1, sz, n);
	//���δ�ӡ
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}