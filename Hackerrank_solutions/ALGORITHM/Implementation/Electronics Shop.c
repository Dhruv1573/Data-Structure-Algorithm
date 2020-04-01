#include<stdio.h>

int main() {
    int b,n,m;
  
    scanf("%d%d%d",&b,&n,&m);
    
    int key[n],usb[m],count=-1; 
 
    
    
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&key[i]);
    }
    
    for(int i=0;i<m;i++)
    {
     scanf("%d",&usb[i]);
    
    } 
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
        
        if(key[i]+usb[j]<=b && key[i]+usb[j]>count)
            
            count=key[i]+usb[j];
    }
}
    printf("%d",count);
    return 0;
}