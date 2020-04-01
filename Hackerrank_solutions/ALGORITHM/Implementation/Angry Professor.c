#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    {
        int n,k,ontime=0,aftertime=0;
        
        scanf("%d%d",&n,&k);
        
        int a[n];
        
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]<=0)
            {
                ontime++;
            }
            else
            {
                aftertime++;
            }
            
        }
        
        if(ontime>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}