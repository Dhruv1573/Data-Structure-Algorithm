#include <stdio.h>

int main()
{
    int n,k,count=0;
    
    scanf("%d",&n);
    
    int a[100]={0};
    
    for(int i=0;i<n;i++)
        
    {
        scanf("%d",&k);
              a[k]++;
              
    }
              
              for(int i=0;i<n-1;i++)
              {
                  if(a[i]+a[i+1]>count)
                      count=a[i]+a[i+1];
              }
              
              printf("%d",count);
}