#include <stdio.h>
#include <math.h>
#define  ARMSTRONG     1
#define NOT_ARMSTRONG  0
int power(int num)
{
   int sum = 0;
   while(num != 0)
   {
      sum = sum + pow(num % 10, 3);
      num = num / 10;
   }
   return sum;
}
int isarmstrong(int num)
{
   int ars = power(num);
   if (ars == num)
   {
		return ARMSTRONG;
   }
   return NOT_ARMSTRONG;
}
int main()
{  
	int num, status;
    printf("Enter the number: ");
    scanf("%d", &num);

	status = isarmstrong(num);
#if 1
	if (status == ARMSTRONG)
	{
		printf("%d: ARMSTRONG\n",num);
	}
	else
	{
		printf("%d: NOT ARMSTRONG\n",num);
	}
#endif	
}
