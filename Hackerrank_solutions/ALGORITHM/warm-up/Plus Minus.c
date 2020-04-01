#include<stdio.h>

int main()
{
    int a,n;
    float plus,minus,zero,p=0,q=0,r=0;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for(a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for(a=0;a<n;a++)
    {
        if(arr[a]>0)
        {
            p++;
        }
    
    else if(arr[a]<0)
    {
        q++;
    }
    else
    {
        r++;
    }
    }
    
    plus=p/n;
    minus=q/n;
    zero=r/n;
    
    printf("%f\n%f\n%f\n",plus,minus,zero);
  
}