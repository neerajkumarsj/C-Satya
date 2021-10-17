#include<stdio.h>
int main()
{
    int a[3][3],i,j,n,biggest = 0;
    printf("enter the 2D array:\n");
    for(i = 0; i < 3; i++)
    {   
        for (j = 0; j < 3; j++)
        {   
            scanf("%d",&a[i][j]);
            if(biggest < a[i][j])
            {   
                biggest = a[i][j];
            }   
        }   
                
    }   
    printf("biggest number in array is %d\n",biggest);
    return 0;
}
