/*
	Program: A function to Print a Phone NUmber
	===========================================
*/

#include <stdio.h>

void printnumber(int num);

void printnumber(int num)
{
	printf("Number: %d\n", num);
}

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printnumber(num);
}
