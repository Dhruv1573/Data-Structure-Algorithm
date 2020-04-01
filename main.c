#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max=0,min=999;
    printf("enter value of n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         if(max<a[i])
            max=a[i];
         if(min>a[i])
            min=a[i];
    }

    printf("maximum number=%d %d",max,min);

    return 0;
}
