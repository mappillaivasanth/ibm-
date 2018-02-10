#include <stdio.h>

int main()
{
    int array[3],*p;
    p=array;
    for(int i=1;i<=3;i++)
    {
        scanf("%d\n",&array[i]);
    }
    printf("The elements in the array is\n");
    for(int i=1;i<=3;i++)
    {
        printf("%d\n",*p);
        p++;
    }
    printf("The address in the array is\n");
    for(int i=1;i<=3;i++)
    {
        printf("%d\n",p);
        p++;
    }

    return 0;
}
