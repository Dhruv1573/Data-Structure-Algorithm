#include<stdio.h>
int main()
{
    long int a,b,c,d,e;
    
    int test,i;
    
    scanf("%d",&test);
    
    for(i=0;i<test;i++)
    {
        scanf("%ld",&a);
        scanf("%ld",&b);
        scanf("%ld",&c);
        scanf("%ld",&d);
        scanf("%ld",&e);
        
        if((c+e)>=d && (d+e)>=c)
        {
          printf("%ld\n",a*c+b*d);  
        }
        
        else if((c+e)<d)
        {
            printf("%ld\n",(c+e)*b + a*c);
        }
        else if((d+e)<c)
        {
            printf("%ld\n",(d+e)*a + b*d);
        }
        
    }
    return 0;
}