#include <stdio.h>
#include <assert.h>

int my_strlen(char* arr)
{
	int i = 0;
	while (*arr++ != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char arr[] = "wsyangxu";
	printf("%d\n", strlen(arr));
	printf("%d\n", my_strlen(arr));
	return 0;
}

ģ��ʵ��strcpy
void my_strcpy(char* dest, const char* sou)//const�ڴ˴���������souָ����ָ������ݲ��ܱ��޸ģ������ܶ�sou�����޸�
{
	while (*sou != '\0')
	{
		//���sou��NULLָ��ʱ���������޷�ʵ��
		*dest++ = *sou++;
	}

}

char* my_strcpy(char* dest, const char* sou)//ǰ�治дvoid����д��char*��Ŀ����Ϊ�˺�����ʽ����
{
	char* adr = dest;
	assert(sou != NULL);//arrest���ʱ���ԣ����sou��NULL�������ڱ��ʽΪ�٣��ͻᱨ��
	while (*dest++ = *sou++)//�˴��������Ǹ�ֵ��*dest��ֵ��asciiֵ������ֵΪ'\0'ʱ��ѭ���ͽ���
	{
		;
	}
	return adr;
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[] = "wsyangxu";
	/*char arr2[10] = NULL;*/
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//��������ʹ����ȫ����λ��ż��ǰ�档
void show(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void adjust(int* arr, int n)
{
	int* left = arr;
	int* right = &arr[n - 1];
	int tmp = 0;
	while (left < right)
	{
		if (*left % 2 != 0)
		{
			left++;
			continue;
		}
		else if (*right % 2 == 0)
		{
			right--;
			continue;
		}
		tmp = *left;
		*left = *right;
		*right = tmp;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	show(arr, n);
	adjust(arr, n);
	printf("\n");
	show(arr, n);
	return 0;
}