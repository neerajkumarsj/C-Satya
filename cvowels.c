#include<stdio.h>
int count_vowels(char *a);
int main()
{
    char a[10] = {'a','f','g','t','i','h'}; //1. Input Array, with base address: a
    int count = count_vowels(a);            //2. Passing the Base address of array a to "count_vowels(a)".
    printf("number of vowels = %d",count);  //    |
}											//    |
int count_vowels(char *a)					//  <-|  Will be recieving it using Pointer char *a
{
    char vowels[5] = {'a','e','i','o','u'}; //3. Predefined Vowels Array
    int count = 0;							//4. Counter Variable
    int i ,j;
    for (i = 0; i < 10; i++)				//5. Will Be Traversing through Array at the address from pointer char *a
    {
        for(j = 0; j < 5; j++)				//6. Will Be Traversing through Array Vowels
        {
            if(a[i] == vowels[j])			//7. Checking every element of array at the pointer char *a, with every element of vowels array
            {
                count++;					//		7.1 If true, count is increamented.
            }								//		7.2 If false, Nothing is done.
        }
    }
    return count;							//8. Will returning the updated Count Value.
}
