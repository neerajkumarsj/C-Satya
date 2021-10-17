/*
	Program: Sum of N natural numbers
	=================================
*/
#include <stdio.h>
int powerOfTwo(int n);

int main()
{
	int n;
	printf("Enter n numbers: ");
	scanf("%d", &n);
	int power = powerOfTwo(n);
	printf("The power of two for n is : %d", power); 
}

int powerOfTwo(int n)
{
	return n * n;
}
