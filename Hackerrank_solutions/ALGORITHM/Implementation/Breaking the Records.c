#include<stdio.h>

int main()
{
    long int arr[1000],i,j,n,count=0,max=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
               
            max=arr[0];
        for(i=0;i<n;i++)
         {
        for(j=0;j<n;j++)
        {
        if(max<arr[j])
        {
                max=arr[j];
                count++;
        }
            
    }
    }
    printf("%ld", count);
    
    count=0;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max>arr[j])
            {
                max=arr[j];
                count++;
        }
            
        }
    }
    printf("% ld", count);
        
 
    return 0;
}