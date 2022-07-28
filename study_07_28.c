#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//思路一，每次轮转一个，执行k次
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
//思路二，建立一个空的数组2，将原数组后k的元素先放到空数组中，再把前len-k个元素放到这个数组中，最后再将数组2覆盖原数组
void my_reverse2(int* p, int len, int k)
{
	k = k % len;
	int arr[100] = { 0 };
	int i = 0;
	int j = 0;
	//将后k个元素放入新数组
	for (i = len - k; i < len; i++)
	{
        arr[j] = *(p + i);
		j++;
	}
	//将前len-k元素放入新数组
	for (i = 0; i < len - k; i++)
	{
		arr[j] = *(p + i);
		j++;
	}
	//新数组覆盖原数组
	for (i = 0; i < len; i++)
	{
		*(p + i) = arr[i];
	}
}
//思路三，将前len-k个元素反转，再将后k个元素反转，最后再将整个数组反转
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
	//轮转数组，n是向右轮转的次数
	my_reverse2(arr1, sz, n);
	//二次打印
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}