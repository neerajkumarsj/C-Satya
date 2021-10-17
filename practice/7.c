/*
	Program: To find if x is divisible by a and b both
	==================================================
*/
#include <stdio.h>
#define DIVISIBLE 1
#define NOT_DIVISIBLE 0

int isDivisible(int num);

int main()
{
	int num, status;
	printf("Enter the number: ");
	scanf("%d", &num);

	status = isDivisible(num);
	if (status == 1)
	{
		printf("%d is Divisible by 3 and 5", num);
	}
	else
	{
		printf("%d is Not Divisible by 3 and 5", num);
	}
}

int isDivisible(int num)
{
	if ((num % 5) && (num % 3) == 0)
	{
		return DIVISIBLE;
	}
	return NOT_DIVISIBLE;
}

