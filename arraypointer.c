#include <stdio.h>

int main()
{
    int a[2][2]={{1,2},{3,4}};
    int (*p)[2];
    p=a;
    printf("values are");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        printf("\n%d\n",*(*(p+i)+j));
    }
  
    return 0;
}
