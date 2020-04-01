#include<stdio.h>

int main()
{
    int m,n,a[25];
    
    scanf("%d%d",&n,&m);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    a[n]=a[0];
    
    int b=0;
    
    for(int i=m;i<=n;i=i+m)
    {
        if(a[i]==1)
        {
            b=b+3;
        }
        if(a[i]==0)
        {
            b++;
        }
        
    }
    printf("%d",100-b);
        return 0;
}