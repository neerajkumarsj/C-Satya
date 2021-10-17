#include <stdio.h>

void add(int a[3][2], int b[3][2], int result[3][2])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

int main()
{
	int a[3][2], b[3][2], r[3][2];
	int i, j;
	printf("Enter the A array Elements: " );
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the B array Elements: " );
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	add(a, b, r);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d  ", r[i][j]);
		}
		printf("\n");
	}
}
