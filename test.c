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

模拟实现strcpy
void my_strcpy(char* dest, const char* sou)//const在此处的作用是sou指针所指向的内容不能被修改，但是能对sou本身修改
{
	while (*sou != '\0')
	{
		//如果sou是NULL指针时，函数就无法实现
		*dest++ = *sou++;
	}

}

char* my_strcpy(char* dest, const char* sou)//前面不写void而是写成char*的目的是为了函数链式访问
{
	char* adr = dest;
	assert(sou != NULL);//arrest语句时断言，如果sou是NULL，括号内表达式为假，就会报错；
	while (*dest++ = *sou++)//此处括号内是赋值给*dest的值的ascii值，当赋值为'\0'时，循环就结束
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

//调整数组使奇数全部都位于偶数前面。
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