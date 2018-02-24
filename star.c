#include <stdio.h>

int main()
{
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=5;j++)
       {
           if(i==1||j==1||i==5||j==5||i==j||j==(i/2)||i==(j/2))
           printf("*");
           printf("\t");
        
       }
       printf("\n");
   }
    return 0;
}
