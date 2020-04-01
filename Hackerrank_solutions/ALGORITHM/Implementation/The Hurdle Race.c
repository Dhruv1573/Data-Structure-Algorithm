#include <stdio.h>

int main()
{
    
    int i,n,k,max=0;
    
    scanf("%d%d",&n,&k);
    
    int len[n];
    
    for(int i=0;i<n;i++)
        
    {
        scanf("%d",&len[i]);
        
        if(len[i]>max)
        
        max=len[i];
        
    }
    
    if(max>k)
    {
        printf("%d",max-k);
    }
    
    else
        printf("0");
    
    return 0;
    
}