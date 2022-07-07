#include <stdio.h>

//´òÓ¡Ñî»ÔÈı½Ç
void deplay(int arr[m][m])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[m][m] = { 0 };
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				if (i == j)
				{
					arr[i][j] = 1;
				}
				else
				{
					arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
				}
			}
		}
		printf("\n");
	}
	deplay(arr);
	return 0;
}