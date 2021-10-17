#include <stdio.h>

int main()
{
	int num, mask = 1, ones = 0, zeroes = 0;
	printf("Enter the Number: ");
	scanf("%d", &num);
	mask = 1 << 7;

	while (mask != 0)
	{
		if (num & mask)
		{
			printf("num = %d mask = %d, res = %d\n", num, mask, num & mask);
			ones++;
		}
		else
		{
			printf("num = %d mask = %d, res = %d\n", num, mask, num & mask);
			zeroes++;
		}
		mask >>= 1;
	}
	printf("\nNumber of Ones %d and zeroes %d \n", ones, zeroes);

}
