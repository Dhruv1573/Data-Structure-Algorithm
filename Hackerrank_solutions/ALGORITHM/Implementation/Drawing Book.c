#include <stdio.h>

int main()
{
    int n,p,a,b;
    scanf("%d\n %d",&n,&p);
    
    a=p/2;
    b=(n/2)-(p/2);
    
    if(a>b)
        printf("%d",b);
    else
        printf("%d",a);
    
    return 0;
}