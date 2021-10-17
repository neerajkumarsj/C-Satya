/*
	Program: Convert Decimal to Binary
	==================================
*/
#include <stdio.h>

void decimal_to_binary(int num);

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	decimal_to_binary(num);
}

void decimal_to_binary(int num)
{
	int i = 0;
	printf("%b is num", num);
}
