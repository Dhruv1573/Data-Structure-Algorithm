#include<stdio.h>

int main()
{
    int t,k=0,j,y,i,b;
    
    int a[100];
    
    scanf("%d",&t);
    
    for(int l=0;l<t;l++)
        
    {
        int n;
        int y=0,k=0,j=0;
        
        scanf("%d",&n);
        b=n;
        
        while(b!=0)
        {
            a[j]=b%10;
            b=b/10;
            j++;
            k++;
            
        }
        
        for(i=0;i<k;i++)
        {
            if(a[i]!=0)
            {
                if(n%a[i]==0)
                {
                    y++;
                    
                }
            }
        }
        printf("%d\n",y);
    }
    
}