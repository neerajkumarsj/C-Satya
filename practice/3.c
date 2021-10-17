/*
	Program: A function to Subtract two Phone NUmbers, should not have negative output
	==================================================================================
*/
#include <stdio.h>

int subnumbers(int num1, int num2);

int main()
{
	int num1, num2;
	printf("Enter the num1, num2: ");
	scanf("%d%d",&num1,&num2);
	int sub = subnumbers(num1, num2);
	printf("After Sub: %d", sub);
}

int subnumbers(int num1, int num2)
{
	int sub;
	if (num1 > num2)
	{
		sub = num1 - num2;
		return sub;
	}
	else
	{
		sub = num2 - num1;
		return sub;
	}
}
