#include <stdio.h>
int main()
{
    int num,key;
    printf("enter the size of the array: ");
    scanf("%d",&num);
    int a[num],i;
    printf("enter %d items:",num);
    for(i = 0; i < num; i++)
    {   
			scanf("%d", &a[i]);
    }   
    printf("array items are: \n");
    for(i = 0; i < num; i++)
    {   
		printf("i: %d", i);
		getchar();
        printf("a[%d]: %d\n", i, a[i]);
    }   
            

    printf("enter the key: \n");
    scanf("%d",&key);
            
    for (i = 1; i <=key; i++)
    {  
    	if(key == a[i])
        {
        	key= a[i];
        }
    }
    printf("key: %d\n",key);

    return 0;
}
