/*
	Program: A function to Add two Phone NUmbers
	===========================================
*/
#include <stdio.h>

int addnumber(int num1, int num2);

int main()
{
	int num1, num2;
	printf("Enter Num1 and NUm2: ");
	scanf("%d%d",&num1, &num2);
	int sum = addnumber(num1, num2);
	printf("Sum: %d", sum);
}

int addnumber(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}
