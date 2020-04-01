#include<stdio.h>

int main()
{
    int n,d,i,j,k;
    scanf("%d%d",&n,&d);
    int r=0;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(arr[j]-arr[i]==d)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[k]-arr[j]==d)
                {
                    r++;
                }
            }
        }
    }
    
    
    }
    printf("%d",r);
    return 0;
}