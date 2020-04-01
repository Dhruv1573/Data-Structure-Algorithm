#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int p[n];
    
    for(int i=1; i<=n; i++)
    {
        int k;
        
    scanf("%d",&k);
        
        p[k]=i;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",p[p[i]]);
    }
    return 0;
}