#include <stdio.h>
int main()
{
    int t,y,i;
    
    scanf("%d",&t);
    
    for(int j=0;j<t;j++)
        
    {
        int n;
        y=1;
        
        scanf("%d",&n);
        
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                y=2*y;
                
            }
            
            else
            {
                y=y+1;    
            }                
            
        }
    printf("%d\n",y);
    }
    return 0;
}