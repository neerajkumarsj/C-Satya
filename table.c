#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void makeStrbits(long n,long b,char *strbits)
{
   long i=0, m=1L<<(b-1);
   while(m){
      strbits[i++]= (n&m)?'1':'0';
      m=m>>1;
   }
}

int main(int argc, char *argv[])
{
   long i,bit=4,mask=0;
   char *strbits = NULL;
   if (argc==2) bit = strtol( argv[1],NULL,10 );

   strbits = calloc(1,bit+1);

   for(i=0;i<bit;i++) mask |= (1L<<i);
   mask ^= -1L;

   printf("Table for a %ld bit integer\n", bit);
   printf("unsgn\t sign\t hex\t sbit\t bits\n" );
   for(i=0; i<pow(2,bit); i++) {
      int sign = ((i&(1L<<(bit-1))) != 0);
      makeStrbits(i,bit,strbits);
      printf("%lu\t %ld\t %0lx\t %1d\t %s\n", i, sign?i^mask:i, i, sign, strbits );
   }
   free(strbits);
   return 0;
}
