#include<stdio.h>

int main()
{
    int n,count=-1;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++,count++)
    {
        if(i<n-2 && a[i+2]==0)
            i++;
            
    }
    
    printf("%d",count);
    
    
    return 0;
    
}