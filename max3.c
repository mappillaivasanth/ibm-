#include <stdio.h>

int main()
{
   int a[3],max,k;
   for(int i=1;i<=3;i++)
   scanf("%d",&a[i]);
   for(int i=1;i<=3;i++)
   {
    
       if(a[i]>max)
       {
           max=a[i];
       }
   }
printf("larger is %d",k);
    return 0;
}
