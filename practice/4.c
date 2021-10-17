/*
	Program: Biggest of Three numbers
			- if number 1: num multiply by 5
			- if number 2: num divide by 5
			- if number 3: num square it 
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
		num1 = num1 * 5;
		printf("Number 1: %d", num1);
	}
	else if((num2 > num1) && (num2 > num3))
	{
		float x = (float) num2 / 5.0;
		printf("NUmber 2: %f", x);
	}
	else
	{
		num3 = num3 * num3;
		printf("Number 3: %d", num3);
	}
}
