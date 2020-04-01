#include<stdio.h>

int main()
{
    int n,m=4,p=0,r=0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        p=(m/2);
        r=r+p;
        m=p*3;
    }
    printf("%d",r);
    
    return 0;
}
    