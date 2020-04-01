#include <stdio.h>

int main()
{
    int x1,x2,v1,v2,t,r=0;

    scanf("%d %d %d %d", &x1,&v1,&x2,&v2);
    
    for(t=0;t<10000;t++)
    {
        if(x1+v1*(t-1)==x2+v2*(t-1))
        
            r++;
    }
    
    if(r==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    

    return 0;

}
