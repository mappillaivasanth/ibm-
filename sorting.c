#include <stdio.h>

int main()
{
    int n,a[200],t;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter %d numbers to form array:",n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j++)
       {
           if(a[i]<a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
               
           }
       }
    }
    for(int i=1;i<=n;i++)
    printf("%d\t",a[i]);
    printf("\nThe largest number in the array is %d",a[1]);
    printf("\nThe second largest number in the array is %d",a[2]);
    printf("\nThe smallest number in the array is %d",a[n]);
    return 0;
}
