#include <stdio.h>
int **add(int **a,int **b);
int main()
{
	int a[3][2], b[3][2], **r;
	int i, j;
	printf("Enter items for matrix A(3x2): ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter items for matrix B(3x2): ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
    r = add(a,b); 
}

int **add(int** a,int** b)
{
    int i,j,result[3][2];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
			printf("r[%d][%d]: %d\t", i, j, result[i][j]);
		}
		printf("\n");
	}
	return result;
}
