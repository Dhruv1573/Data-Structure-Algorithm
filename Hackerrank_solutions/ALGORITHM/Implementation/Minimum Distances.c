#include<stdio.h>

int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}

int main()
{
    int n,i,j,d=999;
    
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
   int last[100000];
    
    for(i=0;i<100000;i++)
        
        last[i]=-1;
    
    for(i=0;i<n;i++)
        {
        if(last[arr[i]]==-1)
            
            last[arr[i]]=i;
        else
            {
            d=min(d,i-last[arr[i]]);
            
            last[arr[i]]=i;
        }
    }
    if(d==999)
        printf("-1\n");
    else
        printf("%d\n",d);
}
  
