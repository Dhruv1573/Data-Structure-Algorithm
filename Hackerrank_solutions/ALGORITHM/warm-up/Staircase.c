#include <stdio.h>


int main() {
int a,i,k,l;
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(k=i;k<=a-1;k++)
        {
            printf(" ");
        }
    
    for(l=i;l>0;l--)
    {
        printf("#");
        
         
    }
    
    printf("\n");
}}