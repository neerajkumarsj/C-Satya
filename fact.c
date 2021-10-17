#include<stdio.h>
int main()
{   
    int num ,fact = 1 ,count;
    printf("Enter the number: ");
    scanf("%d", &num);
    count=1;
    
    while(count<=num)
    {   
		fact = fact * count;
	    count =  count + 1;
	    printf("%d\n", count);
    }   
    printf("factorial = %d\n",fact);
 return 0;
}
