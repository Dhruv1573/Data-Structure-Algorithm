#include<stdio.h>

int main()
{
    int arr[100],n,i,j,d,m,count=0;
    
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d",&d,&m);
    
    int sum[n];
    
    sum[0]=0;
    for(int i=0;i<n;i++)
        sum[i+1]=sum[i]+arr[i];
    
    for(int i=0;i<=n-m;i++)
    {
        if(sum[i+m]-sum[i]==d)
        {
            count++;
        }
      
    }
    printf("%d",count);
   
    
    
    return 0;
}