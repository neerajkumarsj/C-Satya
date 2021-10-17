#include<stdio.h>
int main()
{   
    int num,fib1,fib2,fib3,count;
    printf("enter the value\n");
    scanf("%d",&num);
    fib1=0;
    fib2=1;
    if(num==1)
    {   
        printf("%d\t",fib1);
    }   
    else if(num==2)
    {   
        printf("%d\t%d\t",fib1,fib2);
    }   
    else
    {   
        count=3;
        printf("%d\t%d",fib1,fib2);
        while(count<=num)
        {   
            fib3=fib1+fib2;
            fib1=fib2;
            fib2=fib3;
            printf("\t%d",fib3);
            count++;
        }
    }
}
