/*
	Program: Biggest of Three numbers
	==================================
	1. 
*/
#include <stdio.h>
int isBiggest(int num1, int num2, int num3);


int main()
{
	int num1, num2, num3;
	printf("Enter the numbers: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	isBiggest(num1, num2, num3);
}


int isBiggest(int num1, int num2, int num3)
{
	if ((num1 > num2) && (num1 > num3))
	{
		printf("Number 1: %d", num1);
	}
	else if((num2 > num1) && (num2 > num3))
	{
		printf("NUmber 2: %d", num2);
	}
	else
	{
		printf("Number 3: %d", num3);
	}
}
