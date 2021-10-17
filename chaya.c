#include<stdio.h>
int main()
{
    int num,j,k,temp;
    printf("enter the size of the array: ");
    scanf("%d",&num);
    int a[num];
    printf("enter %d items:",num);
    for(k = 0; k < num; k++)
    {   
            scanf("%d", &a[k]);
    }   
    printf("array items are: \n");
    for(k = 0; k < num; k++)
    {   
            printf("a[%d]: %d\n", k, a[k]);
    }

    printf("Enter the new element to be added and its new position: ");
    scanf("%d%d", &temp, &j);
    int new[num+1];
    for (k=0; k < num; k++)
    {
        if (k==j)
        {
              new[k]=temp;
        }
        if (k < j)
		{
			new[k] = a[k];
		}
		else
		{
			new[k + 1] = a[k];
		}
    }
    for(k = 0; k < num + 1; k++)
    {   
            printf("a[%d]: %d\n", k, new[k]);
    }
    return k;
}
