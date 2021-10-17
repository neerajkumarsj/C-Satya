/*
	Author: Chaya G S
	Program: To get Factorial and Fibonacci
	===============================================
	INput: NUM
	Output: Factorial(num) and Fibonacci Series(num)
	================================================

*/


#include <stdio.h>
int factorial(int num);


int main()
{
	int num = 5;
	int fact = factorial(num);
	printf("Fact of 5 is %d", fact);
}

int factorial(int num)
{
	int i, fact = 1;
	printf("i , num, fact \n");
	for (i = 0; i <= num; i++)
	{
		printf("%d , %d, %d \n", i, num, fact);
		fact = fact * num;
		num = num - 1;
	}
	return fact;
}
